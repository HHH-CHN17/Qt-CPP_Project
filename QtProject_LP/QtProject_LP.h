#pragma once

#include <QtWidgets/QWidget>
#include <QPainter>
#include <QEvent>
#include "ui_QtProject_LP.h"

class QtProject_LP : public QWidget
{
    Q_OBJECT

public:
    QtProject_LP(QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent*);

private:
    Ui::QtProject_LPClass ui;
};
