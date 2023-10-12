#include "TCPGetFile.h"

TCPGetFile::TCPGetFile(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    InitData();
    InitView();
    InitConnect();
}

TCPGetFile::~TCPGetFile()
{

}

void TCPGetFile::InitData()
{
    m_pTcpServer = new QTcpServer(this);
    m_pTcpSocket = new QTcpSocket(this);
    m_pRecvThread = NULL;
}

void TCPGetFile::InitView()
{

}

void TCPGetFile::InitConnect()
{
    connect(ui.StartListenBtn, &QPushButton::clicked, this, &TCPGetFile::SlotStartListen);
    connect(m_pTcpServer, &QTcpServer::newConnection, this, &TCPGetFile::SlotNewConnect);
    connect(m_pRecvThread, &RecvFileThread::SignalGetSuccess, this, &TCPGetFile::SlotGetSuccess);
}

void TCPGetFile::SlotStartListen()
{
    unsigned short port= ui.PortText->text().toUShort();
    m_pTcpServer->listen(QHostAddress::Any, port);
}

void TCPGetFile::SlotNewConnect()
{
    m_pTcpSocket = m_pTcpServer->nextPendingConnection();
    if (!m_pRecvThread)
    {
        //����ÿ������캯������ָ������
        //����m_pRecvThread���ֶ��ͷţ����Դ˴�����ָ���������
        m_pRecvThread = new RecvFileThread(m_pTcpSocket,nullptr);
        m_pRecvThread->start();
    }
}

void TCPGetFile::SlotGetSuccess()
{
    m_pRecvThread->exit();
    m_pRecvThread->wait();
    m_pRecvThread->deleteLater();
    QMessageBox::information(this, "recvFile", "Success");
}