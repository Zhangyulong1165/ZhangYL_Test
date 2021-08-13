#include "customfiledialog.h"
#include <QtWidgets/QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTranslator translator1;
	translator1.load(":/CustomFileDialog/qt_zh_CN.qm");
	a.installTranslator(&translator1);
	CustomFileDialog w;
	//w.setFileMode(QFileDialog::FileMode::ExistingFiles);
	int result = w.exec();
	qDebug() << "-------" << w.selectedFiles();
	return result;
}
