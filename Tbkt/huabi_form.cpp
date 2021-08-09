#include "huabi_form.h"
#include "ui_huabi_form.h"
#include <QDebug>
#include <tbkt_widget.h>
#include <QCursor>
#include <QPainter>
#pragma execution_character_set("utf-8")
huabi_Form::huabi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huabi_Form)
{
    ui->setupUi(this);
    pen = true;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    connect(ui->huabi_huabi,&QPushButton::clicked,this,&huabi_Form::SetPen);
    connect(ui->huabi_era,&QPushButton::clicked,this,&huabi_Form::SetEraser);

    col = QColor(255, 0, 0, 255);
    SetPen();
}

huabi_Form::~huabi_Form()
{
    delete ui;
}

void huabi_Form::SetEraser()
{
    ui->widget_huabu->SetEraser(1);
    pen = false;
    ui->huabi_era->setCheckable(true);
    myCursor = new QCursor(QPixmap(":/new/prefix1/Images/era.png"),-1,-1);    //-1,-1表示热点位于图片中心
    this->setCursor(*myCursor);
}

void huabi_Form::SetPen()
{
    ui->widget_huabu->SetPen(pen_size, col);
    pen = true;
    ui->huabi_huabi->setCheckable(true);
    myCursor = new QCursor(QPixmap(":/new/prefix1/Images/pen.png"),-1,-1);    //-1,-1表示热点位于图片中心
    this->setCursor(*myCursor);
}

void huabi_Form::SetColor()
{

}

void huabi_Form::open_huabu()
{
    ui->widget_huabu->Open();
}

void huabi_Form::paintEvent(QPaintEvent *e)
{
        QPainter p(this);
        p.fillRect(rect(), QColor(255,255,255,80));
}
void huabi_Form::on_pushButton_huabiclose_clicked()
{
    this->close();
}

void huabi_Form::on_huabi_huabi_clicked()
{
//    ui->widget_huabu->lastpen.setColor(Qt::black);
//    ui->widget_huabu->lastpen.setWidth(1);
}

void huabi_Form::on_huabi_close_clicked()
{
    on_huabi_del_clicked();
    this->close();
}

void huabi_Form::on_huabi_era_clicked()
{
//    ui->widget_huabu->lastpen.setWidth(20);
//    ui->widget_huabu->lastpen.setBrush(QBrush(QColor(255,255,255,80)));
}


void huabi_Form::on_pushButton_4_clicked()
{
//    ui->widget_huabu->lastpen.setWidth(10);
}

void huabi_Form::on_pushButton_5_clicked()
{
//    ui->widget_huabu->lastpen.setWidth(20);
}

void huabi_Form::on_pushButton_heise_clicked()
{
    if(pen == true)
    {
    col = QColor(0,0,0);
    SetPen();}
    return;
}

void huabi_Form::on_pushButton_chengse_clicked()
{
    if(pen == true)
    {
        col = QColor(128,128,128);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_huangse_clicked()
{
    if(pen == true)
    {
        col = QColor(245,166,35);
        SetPen();}
    return;


}

void huabi_Form::on_pushButton_huise_clicked()
{
    if(pen == true)
    {
        col = QColor(248,231,28);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_hongse_clicked()
{
    if(pen == true)
    {
        col = QColor(255,0,0);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_baise_clicked()
{
    if(pen == true)
    {
        col = QColor(255,255,255);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_lvse_clicked()
{
    if(pen == true)
    {
        col = QColor(126,211,33);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_lanse_clicked()
{
    if(pen == true)
    {
        col = QColor(45,141,255);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_qingse_clicked()
{
    if(pen == true)
    {
        col = QColor(80,227,194);
        SetPen();}
    return;

}

void huabi_Form::on_pushButton_fense_clicked()
{
    if(pen == true)
    {
        col = QColor(189,16,224);
        SetPen();}
    return;

}

void huabi_Form::on_buabi_unm_clicked()
{
    if(!ui->widget_huabu->_lines.isEmpty())
    {
        ui->widget_huabu->_lines.pop_back();
        ui->widget_huabu->pens.pop_back();
        ui->widget_huabu->update();
    }
}

void huabi_Form::on_huabi_del_clicked()
{
    while(!ui->widget_huabu->_lines.empty() || !ui->widget_huabu->pens.empty())
    {
        ui->widget_huabu->_lines.pop_back();
        ui->widget_huabu->pens.pop_back();
    }
    this->update();
    }

void huabi_Form::closeEvent(QCloseEvent *)
{
    on_huabi_del_clicked();
}

void huabi_Form::on_pushButton_clicked()
{ //画笔的5号粗细
    if(pen == true)
    {
        pen_size = 5;
 //       qDebug()<<status;
    ui->widget_huabu->lastpen.setWidth(5);
}
//    qDebug()<<status;
    else{ui->widget_huabu->SetEraser(5);}
}

void huabi_Form::on_pushButton_2_clicked()
{
    //画笔的10号粗细
    pen_size = 10;
    if(pen == true)
    {
    ui->widget_huabu->lastpen.setWidth(10);
}    else{ui->widget_huabu->SetEraser(10);}

    }
void huabi_Form::on_pushButton_3_clicked()
{
    //画笔的20号粗细
    pen_size = 20;
    if(pen == true)
    {
    ui->widget_huabu->lastpen.setWidth(20);
}
    else{ui->widget_huabu->SetEraser(20);}
}
