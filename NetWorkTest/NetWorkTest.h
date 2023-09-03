#pragma once

#include <QtWidgets/QWidget>
#include <QHostInfo>
#include <QNetWorkInterface>
#include <QMessageBox>
#include "ui_NetWorkTest.h"
#include "CustomDialog.h"

#pragma execution_character_set("utf-8")

class NetWorkTest : public QWidget
{
    Q_OBJECT

public:
    NetWorkTest(QWidget *parent = nullptr);
    ~NetWorkTest();

    void GetHostInfomation();

private:
	void InitData();
    void InitView();
    void InitConnect();

public slots:
    void SlotHostDetail();

private:
    Ui::NetWorkTestClass ui;

    CustomDialog* m_pCustomDialog;
};
