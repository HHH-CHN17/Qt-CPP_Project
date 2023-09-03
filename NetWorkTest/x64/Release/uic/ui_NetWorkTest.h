/********************************************************************************
** Form generated from reading UI file 'NetWorkTest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKTEST_H
#define UI_NETWORKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetWorkTestClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *hostInfo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *IPaddr;
    QPushButton *DetailBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *NetWorkTestClass)
    {
        if (NetWorkTestClass->objectName().isEmpty())
            NetWorkTestClass->setObjectName(QString::fromUtf8("NetWorkTestClass"));
        NetWorkTestClass->resize(600, 400);
        gridLayout = new QGridLayout(NetWorkTestClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 146, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(NetWorkTestClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        hostInfo = new QLineEdit(NetWorkTestClass);
        hostInfo->setObjectName(QString::fromUtf8("hostInfo"));
        hostInfo->setMinimumSize(QSize(200, 30));
        hostInfo->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(hostInfo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(NetWorkTestClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        IPaddr = new QLineEdit(NetWorkTestClass);
        IPaddr->setObjectName(QString::fromUtf8("IPaddr"));
        IPaddr->setMinimumSize(QSize(200, 30));
        IPaddr->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(IPaddr);


        verticalLayout->addLayout(horizontalLayout_2);

        DetailBtn = new QPushButton(NetWorkTestClass);
        DetailBtn->setObjectName(QString::fromUtf8("DetailBtn"));
        DetailBtn->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(DetailBtn);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 146, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(NetWorkTestClass);

        QMetaObject::connectSlotsByName(NetWorkTestClass);
    } // setupUi

    void retranslateUi(QWidget *NetWorkTestClass)
    {
        NetWorkTestClass->setWindowTitle(QCoreApplication::translate("NetWorkTestClass", "NetWorkTest", nullptr));
        label->setText(QCoreApplication::translate("NetWorkTestClass", "\344\270\273\346\234\272\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("NetWorkTestClass", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        DetailBtn->setText(QCoreApplication::translate("NetWorkTestClass", "Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetWorkTestClass: public Ui_NetWorkTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKTEST_H
