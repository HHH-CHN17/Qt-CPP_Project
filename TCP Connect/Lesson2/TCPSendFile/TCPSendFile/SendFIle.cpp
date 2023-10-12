#include "SendFIle.h"

SendFIle::SendFIle(QObject *parent)
	: QObject(parent)
{
	InitData();
	InitView();
	InitConnect();
}

SendFIle::~SendFIle()
{

}
void SendFIle::InitData()
{
	m_pTcpSocket = new QTcpSocket(this);
}
void SendFIle::InitView()
{

}
void SendFIle::InitConnect()
{
	connect(m_pTcpSocket, &QTcpSocket::connected,this, &SendFIle::SlotSuccess);
	connect(m_pTcpSocket, &QTcpSocket::disconnected, this, &SendFIle::SlotDisconnect);
}

void SendFIle::SlotStartConnect(QString ip, unsigned short port)
{
	m_pTcpSocket->connectToHost(QHostAddress(ip), port);
}

void SendFIle::SlotSendFile(QString path)
{
	//�����ļ������QFile�����ӻ�ѡ���ļ��������QFileDialog
	//���飺http://c.biancheng.net/view/9430.html
	QFile file(path);
	file.open(QFile::ReadOnly);

	//ע�⣺���ڷ��������ԣ���ʵ�ǲ�֪����ʲôʱ��ͻ����ܰ��ļ�����
	//��ʱ����Ҫ�ڿ�ʼ���ļ�֮ǰ������Ҫ������ļ���С���߷������������������ж�������
	//QFileInfo���ڻ�ȡ�ļ���Ϣ��ע��QFileDialog��QFile��QFileInfo�ֱ����ʲô��
	//���飺https://blog.csdn.net/vxueying/article/details/86715809
	QFileInfo fileinfo(path);
	int filesize = fileinfo.size();
	m_pTcpSocket->write((char*)&filesize, 4);

	int num = 0;
	while (!file.atEnd())
	{
		QByteArray line = file.readLine();//һ�ζ�һ��
		m_pTcpSocket->write(line);

		num += line.size();
		int percent = num * 100 / file.size();
		emit SignalCurrPercent(percent);
	}
}

void SendFIle::SlotSuccess()
{
	emit SignalisConnectSuccess(true);
}

void SendFIle::SlotDisconnect()
{
	emit SignalisConnectSuccess(false);
}