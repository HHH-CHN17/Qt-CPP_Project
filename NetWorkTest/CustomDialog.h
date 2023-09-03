#pragma once

#include <QDialog>
#include "ui_CustomDialog.h"

class CustomDialog : public QDialog
{
	Q_OBJECT

public:
	CustomDialog(QWidget *parent = nullptr);
	~CustomDialog();

	void SetDialogText(QString strText);

private:
	Ui::CustomDialogClass ui;
};
