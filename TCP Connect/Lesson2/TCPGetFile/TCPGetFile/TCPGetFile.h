#pragma once

#include <QtWidgets/QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include "ui_TCPGetFile.h"
#include "RecvFileThread.h"

class TCPGetFile : public QWidget
{
    Q_OBJECT

public:
    TCPGetFile(QWidget *parent = nullptr);
    ~TCPGetFile();

private:
	void InitData();
    void InitView();
    void InitConnect();

private slots:
    void SlotStartListen();
    void SlotNewConnect();
    void SlotGetSuccess();

private:
    Ui::TCPGetFileClass ui;
    QTcpServer* m_pTcpServer;
    QTcpSocket* m_pTcpSocket;
    RecvFileThread* m_pRecvThread;
};
