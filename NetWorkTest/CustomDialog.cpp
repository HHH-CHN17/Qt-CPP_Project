#include "CustomDialog.h"

CustomDialog::CustomDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

CustomDialog::~CustomDialog()
{}

void CustomDialog::SetDialogText(QString strText)
{
	ui.label->setText(strText);
}