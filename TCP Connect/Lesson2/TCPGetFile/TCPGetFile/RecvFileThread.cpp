#include "RecvFileThread.h"

//此处构造函数中QTcpSocket*和QTcpSocket&没有任何区别
//因为我在构造函数中进行了赋值操作，此时给右值（常量）赋const没有任何意义
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
	//读写文件内容操作用QFile，此处是写文件，同样需要指定文件路径
	//注意qrc中的相对路径和qt中的相对路径写法不一样，qrc中以 : 开头
	//文件步骤：1. Get文件路径。2. 打开文件
	file = new QFile("./recv.txt");
	file->open(QFile::WriteOnly);

	connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &RecvFileThread::SlotGetFile);

	//在实际运行过程中，执行run方法的时候，流程很快，三行代码子线程就结束了
	//但是此时槽函数不一定能被触发，所以我要保证子线程一直运行，直至槽函数被触发，所以用exec()进入事件循环，等待槽函数被执行;
	//详情：https://blog.csdn.net/qq_43371287/article/details/109570798
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

	//判断文件是否接受完
	if (count == size)
	{
		//因为调用了
		m_pTcpSocket->close();
		m_pTcpSocket->deleteLater();
		file->close();
		file->deleteLater();
		emit SignalGetSuccess();
	}
}