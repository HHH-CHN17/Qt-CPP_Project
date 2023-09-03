/********************************************************************************
** Form generated from reading UI file 'CustomWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWIDGET_H
#define UI_CUSTOMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CustomWidgetClass
{
public:

    void setupUi(QDialog *CustomWidgetClass)
    {
        if (CustomWidgetClass->objectName().isEmpty())
            CustomWidgetClass->setObjectName(QString::fromUtf8("CustomWidgetClass"));
        CustomWidgetClass->resize(600, 400);

        retranslateUi(CustomWidgetClass);

        QMetaObject::connectSlotsByName(CustomWidgetClass);
    } // setupUi

    void retranslateUi(QDialog *CustomWidgetClass)
    {
        CustomWidgetClass->setWindowTitle(QCoreApplication::translate("CustomWidgetClass", "CustomWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomWidgetClass: public Ui_CustomWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWIDGET_H
