/********************************************************************************
** Form generated from reading UI file 'UDPServer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSERVER_H
#define UI_UDPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPServerClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *UDPServerClass)
    {
        if (UDPServerClass->objectName().isEmpty())
            UDPServerClass->setObjectName(QString::fromUtf8("UDPServerClass"));
        UDPServerClass->resize(413, 293);
        gridLayout = new QGridLayout(UDPServerClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UDPServerClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(UDPServerClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(UDPServerClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(UDPServerClass);

        QMetaObject::connectSlotsByName(UDPServerClass);
    } // setupUi

    void retranslateUi(QWidget *UDPServerClass)
    {
        UDPServerClass->setWindowTitle(QCoreApplication::translate("UDPServerClass", "UDPServer", nullptr));
        label->setText(QCoreApplication::translate("UDPServerClass", "\350\256\241\346\227\266\345\231\250\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("UDPServerClass", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDPServerClass: public Ui_UDPServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSERVER_H
