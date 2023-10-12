/********************************************************************************
** Form generated from reading UI file 'CMainView.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINVIEW_H
#define UI_CMAINVIEW_H

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

class Ui_MainViewClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *port;
    QSpacerItem *horizontalSpacer;
    QPushButton *setListen;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *record;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *message;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendMessage;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *MainViewClass)
    {
        if (MainViewClass->objectName().isEmpty())
            MainViewClass->setObjectName(QString::fromUtf8("MainViewClass"));
        MainViewClass->resize(422, 601);
        verticalLayout = new QVBoxLayout(MainViewClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 50);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MainViewClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(label);

        port = new QLineEdit(MainViewClass);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout->addWidget(port);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        setListen = new QPushButton(MainViewClass);
        setListen->setObjectName(QString::fromUtf8("setListen"));

        horizontalLayout_2->addWidget(setListen);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(MainViewClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        record = new QTextEdit(groupBox);
        record->setObjectName(QString::fromUtf8("record"));

        gridLayout->addWidget(record, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MainViewClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        message = new QTextEdit(groupBox_2);
        message->setObjectName(QString::fromUtf8("message"));
        message->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(message, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        frame = new QFrame(MainViewClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(146, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        sendMessage = new QPushButton(frame);
        sendMessage->setObjectName(QString::fromUtf8("sendMessage"));

        horizontalLayout_3->addWidget(sendMessage);

        horizontalSpacer_3 = new QSpacerItem(145, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame);


        retranslateUi(MainViewClass);

        QMetaObject::connectSlotsByName(MainViewClass);
    } // setupUi

    void retranslateUi(QWidget *MainViewClass)
    {
        MainViewClass->setWindowTitle(QCoreApplication::translate("MainViewClass", "MainView", nullptr));
        label->setText(QCoreApplication::translate("MainViewClass", "\347\253\257\345\217\243\357\274\232", nullptr));
        setListen->setText(QCoreApplication::translate("MainViewClass", "\345\220\257\345\212\250\347\233\221\345\220\254\346\234\215\345\212\241", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainViewClass", "\345\216\206\345\217\262\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainViewClass", "\345\217\221\351\200\201\347\232\204\344\277\241\346\201\257", nullptr));
        sendMessage->setText(QCoreApplication::translate("MainViewClass", "\345\217\221\351\200\201\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainViewClass: public Ui_MainViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINVIEW_H
