/********************************************************************************
** Form generated from reading UI file 'TCPClient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TCPClientClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ServerPortLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *StartConnectBtn;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *ServerIPLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *DisconnectBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *MessageHistoryText;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *SendMessageText;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *SendMessageBtn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *TCPClientClass)
    {
        if (TCPClientClass->objectName().isEmpty())
            TCPClientClass->setObjectName(QString::fromUtf8("TCPClientClass"));
        TCPClientClass->resize(458, 621);
        verticalLayout = new QVBoxLayout(TCPClientClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 70);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TCPClientClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        ServerPortLabel = new QLineEdit(TCPClientClass);
        ServerPortLabel->setObjectName(QString::fromUtf8("ServerPortLabel"));
        ServerPortLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(ServerPortLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);

        StartConnectBtn = new QPushButton(TCPClientClass);
        StartConnectBtn->setObjectName(QString::fromUtf8("StartConnectBtn"));
        StartConnectBtn->setMinimumSize(QSize(75, 0));
        StartConnectBtn->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_2->addWidget(StartConnectBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(TCPClientClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        ServerIPLabel = new QLineEdit(TCPClientClass);
        ServerIPLabel->setObjectName(QString::fromUtf8("ServerIPLabel"));
        ServerIPLabel->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(ServerIPLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        DisconnectBtn = new QPushButton(TCPClientClass);
        DisconnectBtn->setObjectName(QString::fromUtf8("DisconnectBtn"));
        DisconnectBtn->setMinimumSize(QSize(75, 0));

        horizontalLayout_3->addWidget(DisconnectBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(TCPClientClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MessageHistoryText = new QTextEdit(groupBox);
        MessageHistoryText->setObjectName(QString::fromUtf8("MessageHistoryText"));

        gridLayout->addWidget(MessageHistoryText, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TCPClientClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        SendMessageText = new QTextEdit(groupBox_2);
        SendMessageText->setObjectName(QString::fromUtf8("SendMessageText"));

        gridLayout_2->addWidget(SendMessageText, 0, 0, 1, 1);

        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        SendMessageBtn = new QPushButton(frame);
        SendMessageBtn->setObjectName(QString::fromUtf8("SendMessageBtn"));

        horizontalLayout_5->addWidget(SendMessageBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(TCPClientClass);

        QMetaObject::connectSlotsByName(TCPClientClass);
    } // setupUi

    void retranslateUi(QWidget *TCPClientClass)
    {
        TCPClientClass->setWindowTitle(QCoreApplication::translate("TCPClientClass", "TCPClient", nullptr));
        label->setText(QCoreApplication::translate("TCPClientClass", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        StartConnectBtn->setText(QCoreApplication::translate("TCPClientClass", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("TCPClientClass", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        DisconnectBtn->setText(QCoreApplication::translate("TCPClientClass", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TCPClientClass", "\351\200\232\344\277\241\350\256\260\345\275\225\357\274\232", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TCPClientClass", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", nullptr));
        SendMessageBtn->setText(QCoreApplication::translate("TCPClientClass", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPClientClass: public Ui_TCPClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
