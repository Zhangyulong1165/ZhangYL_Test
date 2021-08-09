#include "jushou_dialog.h"
#include "ui_jushou_dialog.h"
#include "getusertoken.h"
#include <QDebug>
#include <QPushButton>
#include "add_flower.h"
#include <QMessageBox>
#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")
jushou_Dialog::jushou_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jushou_Dialog)
{
    ui->setupUi(this);
    this->installEventFilter(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    tbdev = NULL;
    m_showflag = false;
    init();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnCount(3);

    //行和列的大小设为与内容相匹配
   ui->tableWidget->resizeColumnsToContents();
   ui->tableWidget->resizeRowsToContents();

   ui->tableWidget->setFont(QFont("微软雅黑", 17));

   connect(ui->stackedWidget,SIGNAL(currentChanged(int)),this,SLOT((stackeChanged(int))));
}

jushou_Dialog::~jushou_Dialog()
{
    delete ui;
}

void jushou_Dialog::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void jushou_Dialog::set_showflag_false()
{
    m_showflag = false;
}
void jushou_Dialog::init()
{
    movie = new QMovie(":/new/prefix1/Images/handCall.gif");
    ui->label_3->setMovie(movie);
    movie->start();
    ui->callAgainButton->setEnabled(false);
    ui->callAgainButton->setStyleSheet("QPushButton{background-color: rgb(200, 200, 200);}");
    ui->praiseButton->setEnabled(false);
    ui->praiseButton->setStyleSheet("QPushButton{background-color: rgb(200, 200, 200);}");
    isEnableButton = 0;
}


void jushou_Dialog::initDev(int isEnable)
{
    if(tbdev)
    {
        delete tbdev;
    }
    tbdev = new TbDev;
    connect(tbdev,SIGNAL(sendData(QString,QString)),this,SLOT(revDataMsg(QString,QString)));

    TBModeDef type = TB_MODE_ANSWER;
   int ret = tbdev->setWorkMode(type);
//   replys = "请举手答题";
   if(ret==0)
   {
       replys = "未找到答题设备";
       tbkt->tips_label_text("未找到答题设备");
 //      tbkt->guanbi_widget("未找到设备");
   }
   //ui->stackedWidget->setCurrentWidget(ui->page1);
    ui->stackedWidget->setCurrentIndex(0);
    stuMap.clear();
    if(isEnable)
    {
        ui->callAgainButton->setEnabled(true);
        ui->callAgainButton->setStyleSheet("");
    }
    else
    {
        ui->callAgainButton->setEnabled(false);
        ui->callAgainButton->setStyleSheet("QPushButton{background-color: rgb(200, 200, 200);}");
    }

     //表扬在第1页就是使能
     int currentIndex = ui->stackedWidget->currentIndex();
     if(currentIndex)
     {
         ui->praiseButton->setEnabled(true);
         ui->praiseButton->setStyleSheet("");
     }
     else
     {
         ui->praiseButton->setEnabled(false);
         ui->praiseButton->setStyleSheet("QPushButton{background-color: rgb(200, 200, 200);}");
     }
     isEnableButton = 1;
}

void jushou_Dialog::closeEvent(QCloseEvent *)
{
    qDebug() << "举手窗口关闭了";
    set_showflag_false();
    tbkt->resetUI();
    tbkt->btn_true();

}

bool jushou_Dialog::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               qDebug() << "举手窗口将被掩盖，重新拉回最前";
               activateWindow();   //窗口拉回最前
//                tbkt->tips_label_text("请关闭举手点名后，再进行其他操作");
                              tbkt->tips_label_text("请关闭举手点名后，再进行其他操作");
               tbkt->btn_false();
           }
       }
       return QWidget::eventFilter(obj, ev);
}

void jushou_Dialog::on_pushButton_3_clicked()
{
    if(tbdev)
    {
       tbdev->stopAnswe();
       delete tbdev;
       tbdev = NULL;
    }
    this->close();    
    set_showflag_false();  //取消自己位于最前
    tbkt->btn_true();
    tbkt->resetUI();
}

void jushou_Dialog::revDataMsg(QString cardID, QString answer)
{
//qDebug()<<"cardID-------"<<cardID;

    getusertoken->GetUserClassInfo();
    QVector<studentMsg> stuInfo = getusertoken->stuMsg;
    int i;
    for(i = 0;i<stuInfo.size();i++)
    {
        if(cardID==stuInfo.at(i).card_id)
        {
            QString stu_name =stuInfo.at(i).stu_name;
            QString card_id =stuInfo.at(i).card_id;

            stuMap.insert(card_id,stu_name);
            if(stuMap.size()>0)
            {
                updateStuInfo(); 

               int currentIndex = ui->stackedWidget->currentIndex();
               if(currentIndex&&isEnableButton)
               {
                  isEnableButton = 0;
                  ui->callAgainButton->setEnabled(true);
                  ui->callAgainButton->setStyleSheet("");
                  ui->praiseButton->setEnabled(true);
                  ui->praiseButton->setStyleSheet("");
               }

            }
            break;
        }
    }
}

void jushou_Dialog::updateStuInfo()
{
    ui->tableWidget->clearContents();
    ui->stackedWidget->setCurrentIndex(1);
    stuInfo.clear();
    stuCardIds.clear();
    QMap<QString, QString>::iterator iter = stuMap.begin();
    while (iter != stuMap.end())
    {
        stuInfo.append(iter.value());
        stuCardIds.append(iter.key());
        iter++;
    }

    int row = stuInfo.size()/3;
    ui->tableWidget->setRowCount(row+1);
    int index = 0;
    int isBreak = 0;
    for (int i = 0;i< row+1; i++)
    {
        //zhangxj 设置行高5.27
        ui->tableWidget->setRowHeight(i,40);
        for (int j = 0;j<3;j++)
        {
            setItemData(ui->tableWidget,i,j,stuInfo.at(index));
            index++;
            if(index==stuInfo.size())
            {
                isBreak = 1;
                break;
            }
        }
        if(isBreak==1)
        {
            break;
        }
    }
}

void jushou_Dialog::setItemData(QTableWidget *tableWidget, int x, int y, QString str)
{
    tableWidget->setItem(x,y,new QTableWidgetItem(str));
    tableWidget->item(x,y)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    tableWidget->item(x,y)->setTextColor(QColor(51,51,51));
}


void jushou_Dialog::on_callAgainButton_clicked()
{
    isEnableButton =0;
    initDev(1);
}

void jushou_Dialog::stackeChanged(int index)
{
//qDebug()<<"--------------stackeChanged--------"<<index;
}

void jushou_Dialog::on_praiseButton_clicked()
{
    QString carIdList;
    for(int i = 0;i < stuCardIds.size();i++)
    {
        QString carId = stuCardIds.at(i);
        if(i==stuCardIds.size()-1)
        {
            carIdList = carIdList+carId;
        }
        else
        {
            carIdList = carIdList+carId+",";
        }
    }

    Add_flower::getInstance()->addFlower(carIdList,1,"");
    tbkt->label_biaoyang_show();
    //表扬弹窗
}
