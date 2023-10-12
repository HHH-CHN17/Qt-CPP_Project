#pragma once

#include <QtWidgets/QWidget>
#include <QTcpSocket>
#include <QHostAddress>
#include "ui_TCPClient.h"

#pragma execution_character_set ("utf-8")

class TCPClient : public QWidget
{
    Q_OBJECT

public:
    TCPClient(QWidget *parent = nullptr);
    ~TCPClient();

private:
	void InitData();
    void InitView();
    void InitConnect();

private slots:
    void SlotStartConnectToServer();
    void SlotDisconnect();
    void SlotSendMessage();
    void SlotConnect();
    void SlotGetMessage();

private:
    Ui::TCPClientClass ui;

    QTcpSocket* m_pTcpSocket;
};
