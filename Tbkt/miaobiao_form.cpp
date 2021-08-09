#include "miaobiao_form.h"
#include "ui_miaobiao_form.h"
#include <QString>
#include <QPushButton>
#include <QDebug>
#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")

miaobiao_Form::miaobiao_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::miaobiao_Form)
{
    ui->setupUi(this);
    m_showflag = false;
    this->installEventFilter(this);
    init();
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    countTemp=0;
    secondTemp=0;
    minuteTemp=0;
    hourTemp=0;
    msTimer= new QTimer(this);  //this说明是当前类对象的定时器
    //把信号与槽进行连接
    connect(msTimer,SIGNAL(timeout()),this,SLOT(TimeSlot()));
}

miaobiao_Form::~miaobiao_Form()
{
    delete ui;
}
void miaobiao_Form::init()
{
    ui->label_h->setText("00");
    ui->label_m->setText("00");
    ui->label_s->setText("00");
    ui->stackedWidget->setCurrentWidget(ui->page);
}
void miaobiao_Form::ResetStopwatch()
{
    msTimer->stop();
    ui->label_h->setText("00");
    ui->label_m->setText("00");
    ui->label_s->setText("00");
    ui->stackedWidget->setCurrentWidget(ui->page);
    countTemp=0;
    secondTemp=0;
    minuteTemp=0;
    hourTemp=0;


}
void miaobiao_Form::StartStopwatch()
{
    msTimer->start(10); //10ms
}
void miaobiao_Form::SetStrLength(QString *str, int length)
{
    if(str->length()<length)
    {
        str->insert(0,"0");
    }
}
void miaobiao_Form::StopStopwatch()
{
    msTimer->stop();
}

void miaobiao_Form::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void miaobiao_Form::set_showflag_false()
{
    m_showflag = false;
}
void miaobiao_Form::TimeSlot()
{
    countTemp+=1;
    if(countTemp==100)
    {
        countTemp=0;
        secondTemp+=1;
        if(secondTemp==60)
        {
            secondTemp=0;
            minuteTemp+=1;
            if(minuteTemp==60)
            {
                minuteTemp=0;
                hourTemp+=1;
                if(hourTemp==24)
                {
                    hourTemp=0;
                }
            }
        }
    }
    //把整数转换成字符串
    QString hourstr = QString::number(hourTemp);
    QString minutestr = QString::number(minuteTemp);
    QString secondstr = QString::number(secondTemp);
    //设置字符串的长度为2
    SetStrLength(&hourstr,2);
    SetStrLength(&minutestr,2);
    SetStrLength(&secondstr,2);
    Display(hourstr,minutestr,secondstr);
}
void miaobiao_Form::Display(QString hour, QString minute, QString second)
{
    ui->label_h->setText(hour);
    ui->label_m->setText(minute);
    ui->label_s->setText(second);
}

void miaobiao_Form::on_pushButton_kaishi_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
    msTimer->start(10); //10ms
}

void miaobiao_Form::on_pushButton_chongxinkaishi_clicked()
{
    ResetStopwatch();
}

void miaobiao_Form::on_pushButton_quxiao_clicked()
{
    this->close();
    tbkt->btn_true();
    tbkt->resetUI();
}

void miaobiao_Form::on_pushButton_jixu_clicked()
{
    QString text = "暂停";
    if(ui->pushButton_jixu->text() == text)
    {
        ui->pushButton_jixu->setText("继续");
        StopStopwatch();
    }
    else{
        ui->pushButton_jixu->setText("暂停");
        StartStopwatch(); //10ms
    }
}

void miaobiao_Form::closeEvent(QCloseEvent *)
{
    qDebug() << "秒表窗口关闭了";
    set_showflag_false();  //不要使自己位于最前
//    emit sendMiaobiaoClose();  //发送消息告诉计时窗口，自己要关闭了，让它回到最前方
    tbkt->btn_true();
    tbkt->resetUI();
}

bool miaobiao_Form::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
    {
        if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
        {
            qDebug() << "秒表窗口将被掩盖，重新拉回最前";
            activateWindow();   //窗口拉回最前
            tbkt->tips_label_text("请关闭秒表再操作");
            tbkt->btn_false();
        }
    }
    return QWidget::eventFilter(obj, ev);
}
