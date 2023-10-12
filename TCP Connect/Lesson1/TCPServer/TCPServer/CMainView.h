#pragma once

#include <QtWidgets/QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include "ui_CMainView.h"

#pragma execution_character_set ("utf-8")

class MainView : public QWidget
{
    Q_OBJECT

public:
    MainView(QWidget *parent = nullptr);
    ~MainView();

private:
    void InitData();
    void InitView();
    void InitConnect();

private slots:
    void SlotOpenServer();
    void SlotSendMessage();
    void SlotGetSocket();
    void SlotGetMessage();
    void SlotCLoseSocket();

private:
    Ui::MainViewClass ui;

    QTcpServer* m_pTcpServer;
    QTcpSocket* m_pTcpSocket;
};
