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
	//操作文件的类叫QFile，可视化选择文件的类叫做QFileDialog
	//详情：http://c.biancheng.net/view/9430.html
	QFile file(path);
	file.open(QFile::ReadOnly);

	//注意：对于服务器而言，其实是不知道在什么时候客户端能把文件传完
	//这时候需要在开始传文件之前把我需要传输的文件大小告诉服务器，这样就能有判断依据了
	//QFileInfo用于获取文件信息（注意QFileDialog，QFile，QFileInfo分别代表什么）
	//详情：https://blog.csdn.net/vxueying/article/details/86715809
	QFileInfo fileinfo(path);
	int filesize = fileinfo.size();
	m_pTcpSocket->write((char*)&filesize, 4);

	int num = 0;
	while (!file.atEnd())
	{
		QByteArray line = file.readLine();//一次读一行
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