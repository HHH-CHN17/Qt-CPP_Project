/********************************************************************************
** Form generated from reading UI file 'TCPGetFile.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPGETFILE_H
#define UI_TCPGETFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPGetFileClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortText;
    QPushButton *StartListenBtn;
    QLabel *RecvStatus;

    void setupUi(QWidget *TCPGetFileClass)
    {
        if (TCPGetFileClass->objectName().isEmpty())
            TCPGetFileClass->setObjectName(QString::fromUtf8("TCPGetFileClass"));
        TCPGetFileClass->resize(413, 345);
        verticalLayout = new QVBoxLayout(TCPGetFileClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TCPGetFileClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        PortText = new QLineEdit(TCPGetFileClass);
        PortText->setObjectName(QString::fromUtf8("PortText"));

        horizontalLayout->addWidget(PortText);

        StartListenBtn = new QPushButton(TCPGetFileClass);
        StartListenBtn->setObjectName(QString::fromUtf8("StartListenBtn"));

        horizontalLayout->addWidget(StartListenBtn);


        verticalLayout->addLayout(horizontalLayout);

        RecvStatus = new QLabel(TCPGetFileClass);
        RecvStatus->setObjectName(QString::fromUtf8("RecvStatus"));

        verticalLayout->addWidget(RecvStatus);


        retranslateUi(TCPGetFileClass);

        QMetaObject::connectSlotsByName(TCPGetFileClass);
    } // setupUi

    void retranslateUi(QWidget *TCPGetFileClass)
    {
        TCPGetFileClass->setWindowTitle(QCoreApplication::translate("TCPGetFileClass", "TCPGetFile", nullptr));
        label->setText(QCoreApplication::translate("TCPGetFileClass", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        StartListenBtn->setText(QCoreApplication::translate("TCPGetFileClass", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        RecvStatus->setText(QCoreApplication::translate("TCPGetFileClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPGetFileClass: public Ui_TCPGetFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPGETFILE_H
