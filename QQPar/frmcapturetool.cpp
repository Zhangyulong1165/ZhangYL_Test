#include "frmcapturetool.h"
#include "src/capture/widget/capturewidget.h"

FrmCaptureTool::FrmCaptureTool(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &FrmCaptureTool::onCaptureBtnclicked);
}

void FrmCaptureTool::onCaptureBtnclicked()
{
	CaptureWidget* captureWidget = new CaptureWidget(this);
	connect(captureWidget, SIGNAL(capturePixmap(const QPixmap&)), this, SLOT(onCapturePixmap(const QPixmap&)));
	captureWidget->show();
}

void FrmCaptureTool::onCapturePixmap(const QPixmap& pixmap)
{
	ui.label->setPixmap(pixmap);
}