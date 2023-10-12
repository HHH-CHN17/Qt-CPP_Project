#pragma once

#include <QtWidgets/QWidget>
#include <QPainter>
#include <QEvent>
#include <QTranslator>
#include <QListView>
#include "ui_QtProject_LP.h"

# pragma execution_character_set("utf-8")

class QtProject_LP : public QWidget
{
    Q_OBJECT

public:
    QtProject_LP(QWidget *parent = Q_NULLPTR);

private:
    void InitData();
    void InitView();
    void InitConnect();

    void UpdateUi();
    void ArabicAdapter();

    void InitCommbox();
private slots:
    void SlotLanguageChange(int index);

protected:
    void paintEvent(QPaintEvent*);
    void changeEvent(QEvent* e);

private:
    Ui::QtProject_LPClass ui;

    QTranslator* m_pTaranslator;
};
