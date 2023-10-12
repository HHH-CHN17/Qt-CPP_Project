#pragma once

#include <QtWidgets/QWidget>
#include <QThread>
#include <QMessageBox>
#include <QFileDialog>
#include "ui_MainView.h"
#include "SendFIle.h"

class CMainView : public QWidget
{
    Q_OBJECT

public:
    CMainView(QWidget* parent = nullptr);
    ~CMainView();

private:
    void InitData();
    void InitView();
    void InitConnect();

private slots:
    void SlotStartServer();
    void SlotSelectPath();
    void SlotSendMessage();
    void SlotConnectStatus(bool isSuccess);
    void SlotChangeprogress(int currpercent);

signals:
    void SignalStartSever(QString strIP, unsigned short port);
    void SignalSendMessage(QString strPath);

private:
    Ui::CMainViewClass ui;

    QThread* m_pThread;
    SendFIle* m_pSendFile;
};