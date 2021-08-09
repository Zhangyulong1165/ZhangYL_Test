#pragma once

#include <QtWidgets/QWidget>
#include "ui_frmcapturetool.h"

class FrmCaptureTool : public QWidget
{
	Q_OBJECT

public:
	FrmCaptureTool(QWidget *parent = Q_NULLPTR);

private slots:
	void onCaptureBtnclicked();
	void onCapturePixmap(const QPixmap&);

private:
	Ui::FrmCaptureToolClass ui;
};
