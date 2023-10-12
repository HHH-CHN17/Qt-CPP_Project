#pragma once

#include <QtWidgets/QWidget>
#include <QUdpSocket>
#include "ui_UDPServer.h"

class UDPServer : public QWidget
{
    Q_OBJECT

public:
    UDPServer(QWidget *parent = nullptr);
    ~UDPServer();

private:
    Ui::UDPServerClass ui;
};
