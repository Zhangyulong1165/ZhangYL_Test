#include "shengji_form.h"
#include "ui_shengji_form.h"
#include <QPainter>
#include <QProgressBar>
#include <QDebug>
shengji_Form::shengji_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shengji_Form)
{
    ui->setupUi(this);
    timer = new QTimer(this);
        i= 0;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

//   timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    init();
}

shengji_Form::~shengji_Form()
{
    delete ui;
}
void shengji_Form::init()
{
    ui->stackedWidget->setCurrentWidget(ui->Page1);
}

void shengji_Form::timer_timeout()
{
ui->stackedWidget->setCurrentIndex(2);
timer->stop();
}

void shengji_Form::on_pushButton_2_clicked()
{
    this->close();
}

void shengji_Form::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Page1);
}
void shengji_Form::paintEvent(QPaintEvent *)
{

}

void shengji_Form::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_jindu);
    ui->progressBar->setMaximum(0);
    ui->progressBar->setMinimum(0);
    timer->start(3000);

    }

void shengji_Form::on_pushButton_4_clicked()
{
    this->hide();
}

void shengji_Form::on_pushButton_sdhengjizanting_clicked()
{
    timer->stop();
    this->close();
}
