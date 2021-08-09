#include "chazhao_dialog.h"
#include "ui_chazhao_dialog.h"
#include <QPushButton>
#include <QDebug>
#pragma execution_character_set("utf-8")
chazhao_Dialog::chazhao_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chazhao_Dialog)
{
    ui->setupUi(this);
    m_showflag = false;
    m_check_ok = false;
    fankui_show = false;
    this->installEventFilter(this);
    //    setWindowModality(Qt::WindowModal);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    connect(ui->pushButtonA,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonB,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonC,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonD,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonE,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonF,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonG,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonH,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonI,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonJ,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonK,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonL,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonM,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonN,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonO,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonP,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonQ,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonR,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonS,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonT,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonU,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonV,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonW,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonX,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonY,SIGNAL(clicked()),this,SLOT(wirteValue()));
    connect(ui->pushButtonZ,SIGNAL(clicked()),this,SLOT(wirteValue()));



}

chazhao_Dialog::~chazhao_Dialog()
{
    delete ui;
}

void chazhao_Dialog::chahzai_close()
{
    this->close();
}

void chazhao_Dialog::set_fankui_showflag_true()
{
    fankui_show = true;
}

void chazhao_Dialog::set_fankui_showflag_false()
{
    fankui_show = false;
}

void chazhao_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void chazhao_Dialog::set_showflag_false()
{
    m_showflag = false;
}

void chazhao_Dialog::on_pushButton_close_clicked()
{
    this->close();
    emit stopSearch();
}

void chazhao_Dialog::wirteValue()
{
    m_check_ok = true;
    qDebug()<<"选择了首字母之后，查找的状态***"<<m_showflag;
    QPushButton *pb = qobject_cast<QPushButton*>(sender());
    if(pb)
    {
        QString name = pb->text();
        setName = setName+name;
        ui->lineEdit->setText(setName);
        emit firstName(setName);
    }
}


void chazhao_Dialog::on_deleteButton_clicked()
{
    setName = "";
    ui->lineEdit->setText(setName);
    emit cancel();
}

void chazhao_Dialog::on_cancelButton_clicked()
{
    if(!setName.isEmpty())
    {
        setName=setName.left(setName.length() - 1);
        ui->lineEdit->setText(setName);
        emit firstName(setName);
    }

}

void chazhao_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "查找窗口关闭了";
    set_showflag_false();  //不要使自己位于最前
    on_deleteButton_clicked();
    emit sendChazhaoClose();  //发送消息告诉排行窗口，自己要关闭了，让它回到最前方
}

bool chazhao_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               qDebug() << "查找窗口将被掩盖，重新拉回最前";
                if(!fankui_show)
                {//反馈没出来
               activateWindow();
               //set_fankui_showflag_false();
                }
                else{
                      this->hide();
                }
               if(m_check_ok)
               {//做出了选择
                   this->hide();
                   m_check_ok = false;
               }
               else{
                   activateWindow();
               }
//               activateWindow();   //窗口拉回最前
//               tbkt->tips_show("请关闭倒计时再操作");
//               tbkt->btn_false();
           }
       }
       return QWidget::eventFilter(obj, ev);
}
