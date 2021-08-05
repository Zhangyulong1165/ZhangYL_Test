#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    udpapp = new QUdpApp;
    widget = new Widget;
    connect(ui->pushButton,&QPushButton::clicked,udpapp,&QUdpApp::show);
    connect(ui->pushButton_2,&QPushButton::clicked,widget,&Widget::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

