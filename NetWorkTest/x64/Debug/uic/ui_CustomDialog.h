/********************************************************************************
** Form generated from reading UI file 'CustomDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CustomDialogClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *CustomDialogClass)
    {
        if (CustomDialogClass->objectName().isEmpty())
            CustomDialogClass->setObjectName(QString::fromUtf8("CustomDialogClass"));
        CustomDialogClass->resize(600, 400);
        gridLayout = new QGridLayout(CustomDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CustomDialogClass);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(CustomDialogClass);

        QMetaObject::connectSlotsByName(CustomDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CustomDialogClass)
    {
        CustomDialogClass->setWindowTitle(QCoreApplication::translate("CustomDialogClass", "CustomDialog", nullptr));
        label->setText(QCoreApplication::translate("CustomDialogClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomDialogClass: public Ui_CustomDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
