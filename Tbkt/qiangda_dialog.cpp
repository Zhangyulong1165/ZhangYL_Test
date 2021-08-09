#include "qiangda_dialog.h"
#include "ui_qiangda_dialog.h"
#include "tbdev.h"
#include "getusertoken.h"
#include "add_flower.h"
#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")


qiangda_Dialog::qiangda_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qiangda_Dialog)
{
    ui->setupUi(this);
    this->installEventFilter(this);


    timer = new QTimer(this);
    mytimer = new QTimer(this);
    mytimer->setInterval(8000);
    timer->setInterval(3000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(on_mytimer_timeout()));
    connect(timer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
 //   this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);  
    tbdev=NULL;
   // init();



}
void qiangda_Dialog::init()
{
    ui->stackedWidget_1->setCurrentWidget(ui->page_qiangdakaishi);
    ui->stackedWidget_cen2->setCurrentWidget(ui->stackedWidget_cen1);
    movie = new QMovie(":/new/prefix1/Images/ResponderCall.gif");
    ui->label_3->setMovie(movie);
    movie->start();
    timer->start();
    mytimer->start();
}

void qiangda_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void qiangda_Dialog::set_showflag_false()
{
        m_showflag = false;
}
void qiangda_Dialog::on_mytimer_timeout()
{
    ui->stackedWidget_cen2->setCurrentWidget(ui->page_3);
    ui->label_first->setText("本轮无人抢答！");
    ui->stackedWidget_1->setCurrentWidget(ui->page_wurenqiangda);
    mytimer->stop();
    if(tbdev)
    {
        tbdev->stopAnswe();
    }
}
void qiangda_Dialog::on_timer_timeout()
{
    ui->label_4->setText("请按答题键进行抢答！");
    ui->stackedWidget_cen2->setCurrentWidget(ui->page_2);
    timer->stop();

    if(tbdev)
    {
       delete tbdev;
    }
    tbdev = new TbDev;
    connect(tbdev,SIGNAL(sendData(QString,QString)),this,SLOT(revDataMsg(QString,QString)));

    TBModeDef type = TB_MODE_ANSWER;
    int ret = tbdev->setWorkMode(type);
    if( ret == 0)
    {
        qDebug()<<"进入到抢答************";
        tbkt->tips_label_text("未找到答题设备");
    }

}
qiangda_Dialog::~qiangda_Dialog()
{
    delete ui;
}

void qiangda_Dialog::on_pushButton_guanbi_clicked()
{
    if(tbdev)
    {
        delete tbdev;
        tbdev = NULL;
    }
    timer->stop();
    this->close();
    set_showflag_false();
    tbkt->resetUI();
}

void qiangda_Dialog::on_pushButton_guanbi2_clicked()
{
    if(tbdev)
    {
       delete tbdev;
       tbdev = NULL;
    }
    this->close();
    set_showflag_false();
    tbkt->btn_true();
    tbkt->resetUI();
}

void qiangda_Dialog::on_pushButton_clicked()
{
    init();
}

void qiangda_Dialog::revDataMsg(QString cardID, QString answer)
{
//    tbdev->stopAnswe();
    getusertoken->GetUserClassInfo();
    QVector<studentMsg> stuInfo = getusertoken->stuMsg;
    int i;
    for(i = 0;i<stuInfo.size();i++)
    {
        if(cardID==stuInfo.at(i).card_id)
        {
            cardId = cardID;
            QString stu_name =stuInfo.at(i).stu_name;
            ui->stackedWidget_cen2->setCurrentWidget(ui->page_3);
            ui->label_first->setText(stu_name);
            ui->stackedWidget_1->setCurrentWidget(ui->page_qiangdachenggong);
            tbdev->stopAnswe();
            timer->stop();
            mytimer->stop();
            break;
        }

    }
}

void qiangda_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "举手窗口关闭了";
    set_showflag_false();
    tbkt->btn_true();
    tbkt->resetUI();
}

bool qiangda_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               qDebug() << "配置窗口将被掩盖，重新拉回最前";
               activateWindow();   //窗口拉回最前
               tbkt->tips_label_text("请关闭全员抢答后，再进行其他操作");
               tbkt->btn_false();
           }
       }
       return QWidget::eventFilter(obj, ev);
}

void qiangda_Dialog::on_pushButton_guanbi3_clicked()
{
    if(tbdev)
    {
       delete tbdev;
       tbdev = NULL;
    }
    this->close();
    set_showflag_false();
    tbkt->btn_true();
    tbkt->resetUI();
}

void qiangda_Dialog::on_pushButton_2_clicked()
{
    init();
}

void qiangda_Dialog::on_pushButton_biaoyang_clicked()
{
    Add_flower::getInstance()->addFlower(cardId,1,"");
    tbkt->biaoyang_show();
}
