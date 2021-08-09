#include "tiwen_dialog.h"
#include "ui_tiwen_dialog.h"
#include  "getusertoken.h"
#include "tbkt_widget.h"
#include "add_flower.h"
#pragma execution_character_set("utf-8")
TiWen_Dialog::TiWen_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TiWen_Dialog)
{
    ui->setupUi(this);
    this->installEventFilter(this);
    //    this->setModal(true);
    //    init();
    this->setWindowFlags(Qt::FramelessWindowHint);
    //窗口透明
    this->setAttribute(Qt::WA_TranslucentBackground);
    mytimer = new QTimer(this);
    mytimer->setInterval(3000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));

    timer = new QTimer(this);
    timer->setInterval(50);
    connect(timer,SIGNAL(timeout()),this,SLOT(on_timer_changeName()));
}
void TiWen_Dialog::init()
{
    ui->stackedWidget_tiwen->setCurrentWidget(ui->page_1);
    ui->label->setPixmap(QPixmap(":/new/prefix1/Images/board.png"));
    mytimer->stop();

    stuInfo.clear();
    getusertoken->GetUserClassInfo();
    stuInfo = getusertoken->stuMsg;
}

void TiWen_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void TiWen_Dialog::set_showflag_false()
{
    m_showflag = false;
}
TiWen_Dialog::~TiWen_Dialog()
{
    delete ui;
}
void TiWen_Dialog::on_timer_timeout()
{
    ui->stackedWidget_tiwen->setCurrentWidget(ui->page_2);
    ui->label->setText(stuInfo.at(index).stu_name);
    timer->stop();
    mytimer->stop();
}
void TiWen_Dialog::on_pushButton_dianming_clicked()
{
    mytimer->start();
    timer->start();
}

//提问关闭按钮
void TiWen_Dialog::on_pushButton_close_clicked()
{
    timer->stop();
    mytimer->stop();
    this->close();
    set_showflag_false();  //取消自己位于最前
    tbkt->btn_true();
    tbkt->resetUI();
}

void TiWen_Dialog::on_pushButton_close_2_clicked()
{
    this->close();
    set_showflag_false();  //取消自己位于最前
    tbkt->btn_true();
    tbkt->resetUI();
}
//表扬按钮
void TiWen_Dialog::on_pushButton_biaoyang_clicked()
{
    //    ui->label->setPixmap(QPixmap(":/new/prefix1/Images/good.png"));
    ui->label->setScaledContents(true);
    QString stu_id = QString::number(stuInfo.at(index).stu_id);
    Add_flower::getInstance()->addFlower("",1,stu_id);
    //表扬花

    tbkt->label_biaoyang_show();
}

void TiWen_Dialog::on_timer_changeName()
{
    if(stuInfo.size()>1)
    {
        int size = stuInfo.size();
        index = qrand()%(size-1);
        ui->label->setText(stuInfo.at(index).stu_name);
    }

    if(stuInfo.size()==1)
    {
        ui->label->setText(stuInfo.at(0).stu_name);
    }
}

void TiWen_Dialog::on_pushButton_ddianming_clicked()
{
    stuInfo.clear();
    getusertoken->GetUserClassInfo();
    stuInfo = getusertoken->stuMsg;
    mytimer->start();
    timer->start();
}

void TiWen_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "提问窗口关闭了";
    set_showflag_false();
    tbkt->resetUI();
    tbkt->btn_true();
}

bool TiWen_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
    {
        if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
        {
            qDebug() << "提问窗口将被掩盖，重新拉回最前";
            activateWindow();   //窗口拉回最前
            tbkt->tips_label_text("请关闭提问再操作");
            tbkt->btn_false();
        }
    }
    return QWidget::eventFilter(obj, ev);
}
