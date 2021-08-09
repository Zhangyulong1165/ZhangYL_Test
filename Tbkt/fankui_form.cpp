#include "fankui_form.h"
#include "ui_fankui_form.h"
#include <QDebug>
#pragma execution_character_set("utf-8")
fankui_Form::fankui_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fankui_Form)
{
    ui->setupUi(this);
    this->installEventFilter(this);
    m_showflag = false;
    fankuijieguo = new FanKuiJieGuo_Form();
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    //   setWindowModality(Qt::ApplicationModal);        //设置阻塞类型
    //    setAttribute(Qt::WA_ShowModal, true);           //属性设置 true:模态 false:非模态
    connect(fankuijieguo,SIGNAL(fankuiJieguoClose()),this,SLOT(tell_paihang_fankuijieguo_close()));
    ui->label->setMinimumWidth(80);

}

fankui_Form::~fankui_Form()
{
    delete ui;
}

void fankui_Form::tell_paihang_fankuijieguo_close()
{
    emit sendFankuijieguoClose();
    this->close();
}

void fankui_Form::set_showflag_true()
{
    m_showflag = true;
}

void fankui_Form::set_showflag_false()
{
    m_showflag = false;
}

void fankui_Form::on_pushButton_clicked()
{
    this->close();
    emit sendFankuiClose();
}
void fankui_Form::change_title(QString name_list,QString stuId,int peopleNum)
{
    ui->label->setText("发送反馈给"+name_list);
    nameList = name_list;
    stuID = stuId;
    stuNum = peopleNum;
}
void fankui_Form::change_FYJJ(QString flower)
{
    ui->label_10->setText("        +"+flower);
}

void fankui_Form::closeEvent(QCloseEvent *)
{
    set_showflag_false();
    emit sendFankuiClose();
}

bool fankui_Form::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
        qDebug()<<"反馈真"<<m_showflag;
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               qDebug() << "反馈窗口将被掩盖，重新拉回最前";
                   //set_showflag_false();
                   activateWindow();

           }
       }
       return QWidget::eventFilter(obj, ev);
}

void fankui_Form::on_pushButton_f1_clicked()
{

    this->hide();
//    set_showflag_false();
    fankuijieguo->change_text(nameList,stuID,1);
    fankuijieguo->check_type(1);
    fankuijieguo->pushbutton_imange_change(stuNum);
    fankuijieguo->show();
    emit updata_px();
    fankuijieguo->timer->start();

}

void fankui_Form::on_pushButton_f2_clicked()
{
    qDebug()<<"dianji";
    this->hide();
 //       set_showflag_false();
    fankuijieguo->change_text(nameList,stuID,2);
    fankuijieguo->check_type(2);
    fankuijieguo->pushbutton_imange_change(stuNum);
    fankuijieguo->show();

    emit updata_px();
    fankuijieguo->timer->start();

}

void fankui_Form::on_pushButton_f3_clicked()
{
    this->hide();
 //       set_showflag_false();
    fankuijieguo->change_text(nameList,stuID,2);
    fankuijieguo->check_type(3);
    fankuijieguo->pushbutton_imange_change(stuNum);
    fankuijieguo->show();
    emit updata_px();
    fankuijieguo->timer->start();

}

void fankui_Form::on_pushButton_f4_clicked()
{
    this->hide();
 //       set_showflag_false();
    fankuijieguo->change_text(nameList,stuID,1);
    fankuijieguo->check_type(4);
    fankuijieguo->pushbutton_imange_change(stuNum);
    fankuijieguo->show();
    emit updata_px();
    fankuijieguo->timer->start();



}
