#include "TCPClient.h"

TCPClient::TCPClient(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    InitData();
    InitView();
    InitConnect();
}

TCPClient::~TCPClient()
{

}

void TCPClient::InitData()
{
    m_pTcpSocket = new QTcpSocket(this);
}

void TCPClient::InitView()
{
	ui.ServerIPLabel->setText("127.0.0.1");
	ui.ServerPortLabel->setText("8000");
    ui.SendMessageBtn->setEnabled(false);
    ui.DisconnectBtn->setEnabled(false);
}

void TCPClient::InitConnect()
{
    connect(ui.DisconnectBtn, &QPushButton::clicked, this, &TCPClient::SlotDisconnect);
    connect(ui.StartConnectBtn, &QPushButton::clicked, this, &TCPClient::SlotStartConnectToServer);
    connect(ui.SendMessageBtn, &QPushButton::clicked, this, &TCPClient::SlotSendMessage);
    connect(m_pTcpSocket, &QTcpSocket::connected, this, &TCPClient::SlotConnect);
    connect(m_pTcpSocket, &QTcpSocket::disconnected, this, &TCPClient::SlotDisconnect);
    connect(m_pTcpSocket, &QTcpSocket::readyRead, this, &TCPClient::SlotGetMessage);
}

void TCPClient::SlotStartConnectToServer()
{
    //获取label的ip和port，连接服务器
    QString ip = ui.ServerIPLabel->text();
    unsigned short port = ui.ServerPortLabel->text().toUShort();
    m_pTcpSocket->connectToHost(QHostAddress(ip), port);

    ui.MessageHistoryText->append("连接中……");
    ui.StartConnectBtn->setEnabled(false);
}

void TCPClient::SlotDisconnect()
{
    m_pTcpSocket->close();
    //m_pTcpSocket->deleteLater();
    ui.DisconnectBtn->setEnabled(false);
    ui.StartConnectBtn->setEnabled(true);
    ui.MessageHistoryText->append("连接已断开");
}

void TCPClient::SlotSendMessage()
{
    QString str = ui.SendMessageText->toPlainText();
    m_pTcpSocket->write(str.toUtf8());
    ui.MessageHistoryText->append("客户端说：" + str);
    ui.SendMessageText->clear();
}

void TCPClient::SlotConnect()
{
    ui.MessageHistoryText->append("连接成功！");
    ui.SendMessageBtn->setEnabled(true);
    ui.DisconnectBtn->setEnabled(true);
}

void TCPClient::SlotGetMessage()
{
    QByteArray messageArr;
    messageArr = m_pTcpSocket->readAll();
    ui.MessageHistoryText->append("服务器说：" + messageArr);
}