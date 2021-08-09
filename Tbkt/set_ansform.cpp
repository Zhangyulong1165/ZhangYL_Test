#include "set_ansform.h"
#include "ui_set_ansform.h"
#include <QDebug>
#include <QCheckBox>
#pragma execution_character_set("utf-8")

set_ansForm::set_ansForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_ansForm)
{
    ui->setupUi(this);
    m_showflag = false;
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
   // setAttribute(Qt::WA_ShowModal, true);
    this->installEventFilter(this);
    connect(ui->checkBoxA,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
    connect(ui->checkBoxB,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
    connect(ui->checkBoxC,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
    connect(ui->checkBoxD,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
    connect(ui->checkBoxE,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
    connect(ui->checkBoxF,SIGNAL(stateChanged(int)),this,SLOT(slotCheckBox(int)));
}

set_ansForm::~set_ansForm()
{
    delete ui;
}

void set_ansForm::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void set_ansForm::set_showflag_false()
{
    m_showflag = false;
}

void set_ansForm::on_pushButton_close_clicked()
{
    this->close();
    emit sendAnsClose();
    emit ansCancel();
}

void set_ansForm::on_pushButton_clicked()
{
    emit ans(checkAnswer);
    this->close();
    emit sendCheckAns();
}

void set_ansForm::slotCheckBox(int state)
{
    QCheckBox* checkBox = qobject_cast<QCheckBox*>(sender());
    if(state)
    {
        checkAnswer = checkBox->text().mid(2,1);
    }
}

void set_ansForm::init()
{
    ui->checkBoxA->setCheckState(Qt::Unchecked);
    ui->checkBoxB->setCheckState(Qt::Unchecked);
    ui->checkBoxC->setCheckState(Qt::Unchecked);
    ui->checkBoxD->setCheckState(Qt::Unchecked);
    ui->checkBoxE->setCheckState(Qt::Unchecked);
    ui->checkBoxF->setCheckState(Qt::Unchecked);
}

void set_ansForm::closeEvent(QCloseEvent *)
{
    qDebug() << "设置答案窗口关闭了";
    set_showflag_false();  //不要使自己位于最前
    emit sendAnsClose();  //发送消息告诉互动窗口，自己要关闭了，让它回到最前方
}

bool set_ansForm::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
    {
        if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
        {
            qDebug() << "设置答案将被掩盖，重新拉回最前";
            activateWindow();   //窗口拉回最前
        }
    }
    return QWidget::eventFilter(obj, ev);
}

