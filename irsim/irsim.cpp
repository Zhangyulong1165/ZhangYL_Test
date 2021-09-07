#include "irsim.h"
#include "ui_irsim.h"
#include <QFile>
Irsim::Irsim(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Irsim)
{
    ui->setupUi(this);
    addQssFile();
    initIrsim();

}

Irsim::~Irsim()
{
    delete ui;
}

void Irsim::addQssFile()
{
    //添加qss文件
    QFile loginqss(":/qss/irsim.qss");
    loginqss.open(QFile::ReadOnly);
    this->setStyleSheet(loginqss.readAll());
    loginqss.close();
}

void Irsim::initIrsim()
{
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

}

