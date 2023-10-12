/********************************************************************************
** Form generated from reading UI file 'MainView.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainViewClass
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *IPText;
    QPushButton *ConnectSeverBtn;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *FilePath;
    QPushButton *SelectPathBtn;
    QProgressBar *progressBar;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *SendMessageBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CMainViewClass)
    {
        if (CMainViewClass->objectName().isEmpty())
            CMainViewClass->setObjectName(QString::fromUtf8("CMainViewClass"));
        CMainViewClass->resize(383, 400);
        verticalLayout = new QVBoxLayout(CMainViewClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CMainViewClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        PortText = new QLineEdit(CMainViewClass);
        PortText->setObjectName(QString::fromUtf8("PortText"));

        horizontalLayout->addWidget(PortText);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(CMainViewClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        IPText = new QLineEdit(CMainViewClass);
        IPText->setObjectName(QString::fromUtf8("IPText"));

        horizontalLayout_2->addWidget(IPText);


        verticalLayout->addLayout(horizontalLayout_2);

        ConnectSeverBtn = new QPushButton(CMainViewClass);
        ConnectSeverBtn->setObjectName(QString::fromUtf8("ConnectSeverBtn"));

        verticalLayout->addWidget(ConnectSeverBtn);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        FilePath = new QLineEdit(CMainViewClass);
        FilePath->setObjectName(QString::fromUtf8("FilePath"));

        horizontalLayout_3->addWidget(FilePath);

        SelectPathBtn = new QPushButton(CMainViewClass);
        SelectPathBtn->setObjectName(QString::fromUtf8("SelectPathBtn"));

        horizontalLayout_3->addWidget(SelectPathBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        progressBar = new QProgressBar(CMainViewClass);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        frame = new QFrame(CMainViewClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        SendMessageBtn = new QPushButton(frame);
        SendMessageBtn->setObjectName(QString::fromUtf8("SendMessageBtn"));

        horizontalLayout_4->addWidget(SendMessageBtn);

        horizontalSpacer_2 = new QSpacerItem(126, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(3, 3);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 3);

        retranslateUi(CMainViewClass);

        QMetaObject::connectSlotsByName(CMainViewClass);
    } // setupUi

    void retranslateUi(QWidget *CMainViewClass)
    {
        CMainViewClass->setWindowTitle(QCoreApplication::translate("CMainViewClass", "CMainView", nullptr));
        label->setText(QCoreApplication::translate("CMainViewClass", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CMainViewClass", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        ConnectSeverBtn->setText(QCoreApplication::translate("CMainViewClass", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        SelectPathBtn->setText(QCoreApplication::translate("CMainViewClass", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        SendMessageBtn->setText(QCoreApplication::translate("CMainViewClass", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CMainViewClass: public Ui_CMainViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
