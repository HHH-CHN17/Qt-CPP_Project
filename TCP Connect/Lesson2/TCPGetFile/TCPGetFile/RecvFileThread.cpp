#include "RecvFileThread.h"

//�˴����캯����QTcpSocket*��QTcpSocket&û���κ�����
//��Ϊ���ڹ��캯���н����˸�ֵ��������ʱ����ֵ����������constû���κ�����
RecvFileThread::RecvFileThread(QTcpSocket* TcpSocket, QObject *parent)
	: QThread(parent)
{
	m_pTcpSocket = TcpSocket;
	file = NULL;
}

RecvFileThread::~RecvFileThread()
{

}

void RecvFileThread::run()
{
	//��д�ļ����ݲ�����QFile���˴���д�ļ���ͬ����Ҫָ���ļ�·��
	//ע��qrc�е����·����qt�е����·��д����һ����qrc���� : ��ͷ
	//�ļ����裺1. Get�ļ�·����2. ���ļ�
	file = new QFile("./recv.txt");
	file->open(QFile::WriteOnly);

	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &RecvFileThread::SlotGetFile);

	//��ʵ�����й����У�ִ��run������ʱ�����̺ܿ죬���д������߳̾ͽ�����
	//���Ǵ�ʱ�ۺ�����һ���ܱ�������������Ҫ��֤���߳�һֱ���У�ֱ���ۺ�����������������exec()�����¼�ѭ�����ȴ��ۺ�����ִ��;
	//���飺https://blog.csdn.net/qq_43371287/article/details/109570798
	exec();
}

void RecvFileThread::SlotGetFile()
{
	int count = 0;
	int size = 0;
	if (0 == count)
	{
		m_pTcpSocket->read((char*)&size, 4);
	}

	QByteArray all = m_pTcpSocket->readAll();
	file->write(all);
	count += all.size();

	//�ж��ļ��Ƿ������
	if (count == size)
	{
		//��Ϊ������
		m_pTcpSocket->close();
		m_pTcpSocket->deleteLater();
		file->close();
		file->deleteLater();
		emit SignalGetSuccess();
	}
}