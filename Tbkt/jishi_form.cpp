#include "jishi_form.h"
#include "ui_jishi_form.h"
#include <QtDebug>
#include "tbkt_widget.h"
jishi_Form::jishi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::jishi_Form)
{
    ui->setupUi(this);
    m_showflag = false;   //初始设置自己不要位于最前
    daojishi = new daojishi_Dialog();
    miaobiao = new miaobiao_Form();
    this->installEventFilter(this); //安装事件过滤器
    //    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    connect(this, SIGNAL(sendDaojishiShow()), daojishi, SLOT(set_showflag_true()));  //连接，使倒计时窗口位于在最前
    connect(this, SIGNAL(sendMiaobiaoShow()), miaobiao, SLOT(set_showflag_true()));  //连接，使秒表窗口位于在最前
    connect(daojishi, SIGNAL(sendDaojishiClose()), this, SLOT(set_showflag_true()));   //倒计时窗口关闭了，自己重新回到最前
    connect(miaobiao, SIGNAL(sendMiaobiaoClose()), this, SLOT(set_showflag_true()));   //秒表窗口关闭了，自己重新回到最前
}

jishi_Form::~jishi_Form()
{
    delete ui;
}

void jishi_Form::set_showflag_true()
{

    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void jishi_Form::set_showflag_false()
{
    m_showflag = false;
}
//void jishi_Form::set_showflag_jishi_true()
//{
//    m_showflag = true;
//    activateWindow();  //使窗口显示到最前方
//}
void jishi_Form::on_pushButton_daojishi_clicked()
{
    pwd_position = ui->pushButton_daojishi->mapToGlobal(ui->pushButton_daojishi->pos());
    daojishi->move(pwd_position.x()-120,pwd_position.y()-150);
    set_showflag_false();  //取消自己位于最前
       daojishi->show();  //显示消息弹窗
       emit sendDaojishiShow();   //使倒计时弹窗位于最前
       tbkt->showAWindow();
}

void jishi_Form::on_pushButton_miaobiao_clicked()
{
    this->hide();
    pwd_position = ui->pushButton_miaobiao->mapToGlobal(ui->pushButton_miaobiao->pos());
    miaobiao->move(pwd_position.x()-120,pwd_position.y()-370);
    miaobiao->show();
    emit sendMiaobiaoShow();
    tbkt->showAWindow();

}

void jishi_Form::closeEvent(QCloseEvent *)
{
    qDebug() << "计时窗口关闭了";
    set_showflag_false();
}

bool jishi_Form::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
        {
            if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
            {
                qDebug() << "计时窗口将被掩盖，重新拉回最前";

                this->hide();
            }
        }
        return QWidget::eventFilter(obj, ev);
}
