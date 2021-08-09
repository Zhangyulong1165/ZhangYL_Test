#include "paihang_form.h"
#include "ui_paihang_form.h"
#include "tbkt_widget.h"
#pragma execution_character_set("utf-8")

paihang_Form::paihang_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::paihang_Form)
{
    ui->setupUi(this);
    m_showflag = false;
    my_state = false;
    chazhao_show = true;
    chazhao = new chazhao_Dialog();
    zhezhaowidget = new QWidget(this);
    QString str("QWidget{background-color:rgba(0,0,0,0.6);}");
    zhezhaowidget->setStyleSheet(str);
    zhezhaowidget->setGeometry(0, 0, 1, 1);
    zhezhaowidget->hide();
    fankui = new fankui_Form();
    this->installEventFilter(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(this->windowFlags()|Qt::Dialog);
//    connect(ui->pushButton_chazhao,&QPushButton::clicked,tbkt,&Tbkt_Widget::chazhao_show);
    init();
   // ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0, 110);
    ui->tableWidget->setColumnWidth(1, 160);
    ui->tableWidget->setColumnWidth(2, 70);
    ui->tableWidget->setFont(QFont("微软雅黑", 15));
    connect(ui->tableWidget,SIGNAL(cellClicked(int, int)),this,SLOT(fanKuiSlot(int,int)));

    ui->choicetableWidget->setFocusPolicy(Qt::NoFocus);
    ui->choicetableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->choicetableWidget->setColumnCount(3);
    ui->choicetableWidget->setColumnWidth(0, 90);
    ui->choicetableWidget->setColumnWidth(1, 120);
    ui->choicetableWidget->setColumnWidth(2, 70);
    ui->choicetableWidget->setFont(QFont("微软雅黑", 15));

    ui->searchTableWidget->setFocusPolicy(Qt::NoFocus);
    ui->searchTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->searchTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->searchTableWidget->setColumnCount(3);
    ui->searchTableWidget->setColumnWidth(0, 110);
    ui->searchTableWidget->setColumnWidth(1, 160);
    ui->searchTableWidget->setColumnWidth(2, 70);
    ui->searchTableWidget->setFont(QFont("微软雅黑", 15));

    connect(ui->searchTableWidget,SIGNAL(cellClicked(int, int)),this,SLOT(fanKuiSearch(int,int)));


    connect(fankui,SIGNAL(updata_px()),this,SLOT(updateUi()));
    connect(chazhao,SIGNAL(firstName(QString)),this,SLOT(lookup(QString)));
    connect(chazhao,SIGNAL(stopSearch()),this,SLOT(today()));
    connect(chazhao,SIGNAL(cancel()),this,SLOT(todayPx()));

    connect(this, SIGNAL(sendChazhaoShow()), chazhao, SLOT(set_showflag_true()));  //连接，使查找窗口位于在最前
    connect(this, SIGNAL(sendChazhaoShow()), this, SLOT(set_showflag_true()));  //连接，使查找窗口位于在最前
    connect(this, SIGNAL(sendFankuiShow()), fankui, SLOT(set_showflag_true()));    //连接，使反馈窗口位于在最前

    connect(this, SIGNAL(sendFankuiShow()), chazhao, SLOT(set_fankui_showflag_true()));    //连接，使反馈窗口位于在最前
    connect(this, SIGNAL(sendFankuiShow()), chazhao, SLOT(chahzai_close()));    //连接，使反馈窗口位于在最前

    connect(chazhao, SIGNAL(sendChazhaoClose()), this, SLOT(set_showflag_true()));   //消息窗口关闭了，自己重新回到最前
    connect(chazhao, SIGNAL(sendChazhaoClose()), this, SLOT(check_my_state()));

    connect(fankui, SIGNAL(sendFankuiClose()), this, SLOT(set_showflag_true()));   //反馈窗口关闭了，自己重新回到最前
    connect(fankui, SIGNAL(sendFankuiClose()), chazhao, SLOT(set_fankui_showflag_false()));   //反馈窗口关闭了，自己重新回到最前
    connect(fankui,SIGNAL(sendFankuijieguoClose()),this,SLOT(set_showflag_true()));
    connect(fankui,SIGNAL(sendFankuijieguoClose()),chazhao,SLOT(chahzai_close()));

    connect(fankui, SIGNAL(sendFankuijieguoClose()), this, SLOT(check_my_state()));   //反馈结果窗口关闭了，自己重新回到最前
    connect(this,SIGNAL(sendFankuiPaihangShow()),this,SLOT(set_my_state_false()));

    //    connect(this,SIGNAL(),this,SLOT());
//    connect(ans, SIGNAL(sendFankuiClose()), this, SLOT(set_showflag_true()));
}

paihang_Form::~paihang_Form()
{
    delete ui;
}
void paihang_Form::init()
{
    ui->pushButton->setVisible(false); //是否手动关闭排行
    ui->stackedWidget_dbaj->setCurrentWidget(ui->stackedWidget_dbaj_1);
    ui->stackedWidget_pauhangxianshi->setCurrentWidget(ui->stackedWidget_pauhangxianshipage1);
    ui->tableWidget->clearContents();
    ui->label_no2->setText("");
    ui->label_no22->setText("");
    ui->label_no1->setText("");
    ui->label_no11->setText("");
    ui->label_no3->setText("");
    ui->label_no33->setText("");

}

void paihang_Form::check_my_state()
{
    if(my_state)
    {
        set_my_state_false();
    }
}

void paihang_Form::set_my_state_true()
{
    my_state = true;
}

void paihang_Form::set_my_state_false()
{
    my_state = false;
}

void paihang_Form::set_chazhaoshowflag_true()
{
    chazhao_show = true;
}

void paihang_Form::set_chazhaoshowflag_false()
{
    chazhao_show = false;
}
void paihang_Form::set_showflag_true()
{
    m_showflag = true;
    activateWindow();  //使窗口显示到最前方
}

void paihang_Form::set_showflag_false()
{
    m_showflag = false;
}

void paihang_Form::on_pushButton_jinri_clicked()
{
    ui->pushButton_jrph->setStyleSheet("QPushButton:{color:rgba(255, 255, 255,1);}");
    ui->pushButton_bzph->setStyleSheet("QPushButton:{color:rgba(255, 255, 255,0.5);}");
}

void paihang_Form::on_pushButton_jinri_duoxuan_clicked()
{
    ui->stackedWidget_pauhangxianshi->setCurrentWidget(ui->stackedWidget_pauhangxianshi_duoxuan);
    ui->stackedWidget_dbaj->setCurrentWidget(ui->stackedWidget_dbaj_2);
    todaySearch();
    sendName = "";
}


void paihang_Form::on_pushButton_dxqx_clicked()
{
    ui->stackedWidget_pauhangxianshi->setCurrentWidget(ui->stackedWidget_pauhangxianshipage1);
    ui->stackedWidget_dbaj->setCurrentWidget(ui->stackedWidget_dbaj_1);
    stuOrder();
}

void paihang_Form::on_pushButton_chazhao_clicked()
{
    ui->stackedWidget_pauhangxianshi->setCurrentWidget(ui->stackedWidget_pauhangxianshi_chazhao);
    ui->stackedWidget_dbaj->setCurrentWidget(ui->stackedWidget_dbaj_3);
    chazhao->show();

    emit sendChazhaoShow();
    emit sendChazhaoAndMeShow();
    set_showflag_false();  //取消自己位于最前;

    //查找排行
    ui->searchTableWidget->clearContents();
    for(int i=0;i<stuMsg.size();i++)
    {

        ui->searchTableWidget->setRowCount(i+1);
        ui->searchTableWidget->setRowHeight(i,50);
        QString stuNmae = stuMsg.at(i).stu_name;
        int today_num = stuMsg.at(i).today_num;
        setItemData(ui->searchTableWidget,i,0,QString::number(i+1));
        setItemData(ui->searchTableWidget,i,1,stuNmae);
        setFlower(ui->searchTableWidget,i,today_num);
    }


}

void paihang_Form::on_pushButton_czqx_clicked()
{
    ui->stackedWidget_pauhangxianshi->setCurrentWidget(ui->stackedWidget_pauhangxianshipage1);
    ui->stackedWidget_dbaj->setCurrentWidget(ui->stackedWidget_dbaj_1);
    //zhangxj 2021.6.1
    stuOrder();
}

//今日排行按键
void paihang_Form::on_pushButton_jrph_clicked()
{
    ui->pushButton_jrph->setStyleSheet("QPushButton {border-style: solid;border-bottom-color: rgb(255,255,255);border-right-color: rgb(117, 99, 255);border-top-color:rgb(117, 99, 255);border-left-color: rgb(117, 99, 255);border-width: 3px;	border-radius: 0px;color: rgb(255,255,255);font: 75 14pt ;background-color: rgb(117, 99, 255);background-repeat: no-repeat;background-position: left center;}");
    ui->pushButton_bzph->setStyleSheet("QPushButton {border-style: solid;border-bottom-color: rgb(200,200,200);border-right-color: rgb(117, 99, 255);border-top-color:rgb(117, 99, 255);border-left-color: rgb(117, 99, 255);border-width: 3px;	border-radius: 0px;color: rgb(200,200,200);font: 75 14pt ;background-color: rgb(117, 99, 255);background-repeat: no-repeat;background-position: left center;}");
    sendIndex = 0;
    int index = ui->stackedWidget_pauhangxianshi->currentIndex();
    if(index==0)
    {
        if(stuMsg.size()==1)
        {
            QString name1 = stuMsg.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuMsg.at(0).today_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);
        }
        else if(stuMsg.size()==2)
        {
            QString name1 = stuMsg.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuMsg.at(0).today_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuMsg.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuMsg.at(1).today_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);
        }
        else  if(stuMsg.size()==3)
        {
            QString name1 = stuMsg.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuMsg.at(0).today_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuMsg.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuMsg.at(1).today_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);

            QString name3 = stuMsg.at(2).stu_name;
            QString flowerNmae3 = QString::number(stuMsg.at(2).today_num);
            ui->label_no3->setText(name3);
            ui->label_no33->setText(flowerNmae3);

        }
        else
        {
            if(stuMsg.size()==0)
            {
                return;
            }

            QString name1 = stuMsg.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuMsg.at(0).today_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuMsg.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuMsg.at(1).today_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);

            QString name3 = stuMsg.at(2).stu_name;
            QString flowerNmae3 = QString::number(stuMsg.at(2).today_num);
            ui->label_no3->setText(name3);
            ui->label_no33->setText(flowerNmae3);

            ui->tableWidget->clearContents();
            for(int i=3;i<stuMsg.size();i++)
            {

                ui->tableWidget->setRowCount(i+1);
                 ui->tableWidget->setRowHeight(i-3,50);
                QString stuNmae = stuMsg.at(i).stu_name;
                int today_num = stuMsg.at(i).today_num;
                setItemData(ui->tableWidget,i-3,0,QString::number(i+1));
                setItemData(ui->tableWidget,i-3,1,stuNmae);
                setFlower(ui->tableWidget,i-3,today_num);
            }
        }
    }
    else if(index==1)
    {
        todaySearch();
    }
    else
    {
        ui->searchTableWidget->clearContents();
        for(int i=0;i<stuMsg.size();i++)
        {
            ui->searchTableWidget->setRowCount(i+1);
            ui->searchTableWidget->setRowHeight(i,50);
            QString stuNmae = stuMsg.at(i).stu_name;
            int today_num = stuMsg.at(i).today_num;
            setItemData(ui->searchTableWidget,i,0,QString::number(i+1));
            setItemData(ui->searchTableWidget,i,1,stuNmae);
            setFlower(ui->searchTableWidget,i,today_num);
        }
    }
}

void paihang_Form::stuOrder()
{
   // init();zhangxj去掉初始化 2021.6.1

    ui->tableWidget->clearContents();
    ui->label_no2->setText("");
    ui->label_no22->setText("");
    ui->label_no1->setText("");
    ui->label_no11->setText("");
    ui->label_no3->setText("");
    ui->label_no33->setText("");

    getusertoken->GetUserClassInfo();
    stuMsg = getusertoken->stuMsg;
    stuInfo = stuMsg;
    on_pushButton_jrph_clicked();
}

void paihang_Form::closeEvent(QCloseEvent *)
{
    qDebug() << "排行窗口关闭了";
    tbkt->resetUI();
    set_showflag_false();
}

bool paihang_Form::eventFilter(QObject *obj, QEvent *ev)
{
    if(m_showflag)   //如果此窗口应该是位于最前的
       {
           if(obj == this && ev->type() == QEvent::WindowDeactivate)   //如果本窗口要被遮盖了
           {
               //没有打开查找，和反馈的时候
               if(m_showflag)
               {
                   this->close();
               }
               //打开了查找。没有打开反馈
               if(chazhao_show)
               {
                   this->show();
               }
               //打开了反馈，没有打开查找
           }
       }
       return QWidget::eventFilter(obj, ev);
}

//本周排行按键
void paihang_Form::on_pushButton_bzph_clicked()
{
    ui->pushButton_bzph->setStyleSheet("QPushButton {border-style: solid;border-bottom-color: rgb(255,255,255);border-right-color: rgb(117, 99, 255);border-top-color:rgb(117, 99, 255);border-left-color: rgb(117, 99, 255);border-width: 3px;	border-radius: 0px;color: rgb(255,255,255);font: 75 14pt ;background-color: rgb(117, 99, 255);background-repeat: no-repeat;background-position: left center;}");
    ui->pushButton_jrph->setStyleSheet("QPushButton {border-style: solid;border-bottom-color: rgb(200,200,200);border-right-color: rgb(117, 99, 255);border-top-color:rgb(117, 99, 255);border-left-color: rgb(117, 99, 255);border-width: 3px;	border-radius: 0px;color: rgb(200,200,200);font: 75 14pt ;background-color: rgb(117, 99, 255);background-repeat: no-repeat;background-position: left center;}");

    sendIndex = 1;
    //本周排序
    studentMsg info;
    int n = stuInfo.size();
    for (int i=0; i<n-1; ++i)
    {
        for (int j=0; j<n-1-i; ++j)
        {
            if (stuInfo[j].week_num < stuInfo[j+1].week_num)
            {
                info = stuInfo[j];
                stuInfo[j] = stuInfo[j+1];
                stuInfo[j+1] = info;
            }
        }
    }

    //本周排序显示
    int index = ui->stackedWidget_pauhangxianshi->currentIndex();
    if(index==0)
    {
        if(stuInfo.size()==1)
        {
            QString name1 = stuInfo.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuInfo.at(0).week_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);
        }
        else if(stuInfo.size()==2)
        {
            QString name1 = stuInfo.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuInfo.at(0).week_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuInfo.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuInfo.at(1).week_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);
        }
        else if(stuInfo.size()==3)
        {
            QString name1 = stuInfo.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuInfo.at(0).week_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuInfo.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuInfo.at(1).week_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);

            QString name3 = stuInfo.at(2).stu_name;
            QString flowerNmae3 = QString::number(stuInfo.at(2).week_num);
            ui->label_no3->setText(name3);
            ui->label_no33->setText(flowerNmae3);
        }
        else
        {
            if(stuInfo.size()==0)
            {
                return;
            }
            QString name1 = stuInfo.at(0).stu_name;
            QString flowerNmae1 = QString::number(stuInfo.at(0).week_num);
            ui->label_no1->setText(name1);
            ui->label_no11->setText(flowerNmae1);

            QString name2 = stuInfo.at(1).stu_name;
            QString flowerNmae2 = QString::number(stuInfo.at(1).week_num);
            ui->label_no2->setText(name2);
            ui->label_no22->setText(flowerNmae2);

            QString name3 = stuInfo.at(2).stu_name;
            QString flowerNmae3 = QString::number(stuInfo.at(2).week_num);
            ui->label_no3->setText(name3);
            ui->label_no33->setText(flowerNmae3);

            ui->tableWidget->clearContents();

            for(int i=3;i<stuInfo.size();i++)
            {

                ui->tableWidget->setRowCount(i+1);
                ui->tableWidget->setRowHeight(i-3,50);
                QString stuNmae = stuInfo.at(i).stu_name;
                int week_num = stuInfo.at(i).week_num;
                setItemData(ui->tableWidget,i-3,0,QString::number(i+1));
                setItemData(ui->tableWidget,i-3,1,stuNmae);
                setFlower(ui->tableWidget,i-3,week_num);
            }
        }
    }
    else if(index==1)
    {
        //本周查询显示
        weekSearch();
    }
    else
    {
        ui->searchTableWidget->clearContents();
        for(int i=0;i<stuInfo.size();i++)
        {
            ui->searchTableWidget->setRowCount(i+1);
            ui->searchTableWidget->setRowHeight(i,50);
            QString stuNmae = stuInfo.at(i).stu_name;
            int week_num = stuInfo.at(i).week_num;
            setItemData(ui->searchTableWidget,i,0,QString::number(i+1));
            setItemData(ui->searchTableWidget,i,1,stuNmae);
            setFlower(ui->searchTableWidget,i,week_num);
        }
    }

}

void paihang_Form::setItemData(QTableWidget *tableWidget, int x, int y, QString str)
{
    tableWidget->setItem(x,y,new QTableWidgetItem(str));
    tableWidget->item(x,y)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    tableWidget->item(x,y)->setTextColor(QColor(51,51,51));
}

void paihang_Form::setFlower(QTableWidget *tableWidget, int x, int flowerNum)
{
    tableWidget->setItem(x,2,new QTableWidgetItem(QIcon(":/new/prefix1/Images/f.png"), QString("%1").arg(flowerNum)));
    tableWidget->item(x,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    QLabel *label = new QLabel();
    label->setPixmap(QPixmap(":/new/prefix1/Images/f.png"));
}

void paihang_Form::setCheckQTableWidge(QTableWidget *tableWidget, int x)
{
    QTableWidgetItem *check=new QTableWidgetItem;
    check->setCheckState (Qt::Unchecked);
    tableWidget->setItem(x,0,check); //插入复选框
    ItemList.append(check);
}

//本日查找排序
void paihang_Form::todaySearch()
{

    ui->moreCheckBox->setCheckState(Qt::Unchecked);
    ItemList.clear();
    ui->choicetableWidget->clearContents();
    for(int i=0;i<stuMsg.size();i++)
    {
        ui->choicetableWidget->setRowCount(i+1);
        ui->choicetableWidget->setRowHeight(i,50);
        QString stuNmae = stuMsg.at(i).stu_name;
        int today_num = stuMsg.at(i).today_num;
        setCheckQTableWidge(ui->choicetableWidget,i);
        setItemData(ui->choicetableWidget,i,1,stuNmae);
        setFlower(ui->choicetableWidget,i,today_num);
    }
}

void paihang_Form::weekSearch()
{

    ui->moreCheckBox->setCheckState(Qt::Unchecked);
    ItemList.clear();
    for(int i=0;i<stuInfo.size();i++)
    {
        ui->choicetableWidget->setRowCount(i+1);
        ui->choicetableWidget->setRowHeight(i,50);
        QString stuNmae = stuInfo.at(i).stu_name;
        int week_num = stuInfo.at(i).week_num;
        setCheckQTableWidge(ui->choicetableWidget,i);
        setItemData(ui->choicetableWidget,i,1,stuNmae);
        setFlower(ui->choicetableWidget,i,week_num);
    }
}


void paihang_Form::on_pushButton_dxqd_clicked()
{
    //调用反馈
//    QString name = "小红";
//    fankui.change_title(name);
//    fankui.show();
    //**********************
    //单选名字
    sendName = "";
    if(!(ui->moreCheckBox->isChecked()))
    {
        int num = 0;
        QString stuIdList;
        for(int i =0;i<ItemList.size();i++)
        {
             QTableWidgetItem *check = ItemList.at(i);
             if(check->checkState()==Qt::Checked)
             {
                 QString name = ui->choicetableWidget->item(i,1)->text();
                 sendName= sendName + name;
                 QString carId;
                 if(name == stuMsg.at(i).stu_name)
                 {
                     carId = QString::number(stuMsg.at(i).stu_id);
                     stuIdList = stuIdList+carId+",";
                     num++;
                 }


             }
        }
        if(stuIdList.isEmpty())
        {
            return;
        }

        stuIdList = stuIdList.left(stuIdList.length()-1);
        fankui->change_title(sendName,stuIdList,num);
        fankui->show();
         emit sendFankuiShow();
        emit sendFankuiPaihangShow();
        set_showflag_false();


    }
    else
    {
       //多选
        if(stuMsg.size()<3)
        {
            return;
        }

        for(int i = 0; i< 3;i++)
        {
            QString name = ui->choicetableWidget->item(i,1)->text();
            sendName= sendName + name;
        }
        sendName = sendName+"……";


       /********************/
        int num = 0;
        QString stuIdList;
        for(int i =0;i<ItemList.size();i++)
        {
             QTableWidgetItem *check = ItemList.at(i);
             if(check->checkState()==Qt::Checked)
             {
                 QString name = ui->choicetableWidget->item(i,1)->text();
                 QString carId;
                 if(name == stuMsg.at(i).stu_name)
                 {
                     carId = QString::number(stuMsg.at(i).stu_id);
                     stuIdList = stuIdList+carId+",";
                 }


             }
        }

        stuIdList = stuIdList.left(stuIdList.length()-1);
        fankui->change_title(sendName,stuIdList,3);
        fankui->show();
            emit sendFankuiShow();
        set_showflag_false();
        /*************************/

    }

//    if(!(sendName.isEmpty()))
//    {
//        fankui.change_title(sendName,"",3);
//        fankui.show();
//    }

}

//全选
void paihang_Form::on_moreCheckBox_stateChanged(int state)
{
    if(state)
    {
        for(int i = 0;i<ItemList.size();i++)
        {
            QTableWidgetItem *check = ItemList.at(i);
            check->setCheckState(Qt::Checked);
            ui->choicetableWidget->setItem(i,0,check);
        }
    }
    else
    {
        for(int i = 0;i<ItemList.size();i++)
        {
            QTableWidgetItem *check = ItemList.at(i);
            check->setCheckState(Qt::Unchecked);
            ui->choicetableWidget->setItem(i,0,check);
        }
    }

}

void paihang_Form::fanKuiSlot(int row, int column)
{
    QString name = ui->tableWidget->item(row,1)->text();
    QString carId;
    for(int i =0;i<stuMsg.size();i++)
    {
        if(name == stuMsg.at(i).stu_name)
        {
            carId = QString::number(stuMsg.at(i).stu_id);
        }
    }

    fankui->change_title(name,carId,1);
    fankui->show();
    emit sendFankuiShow();
    set_showflag_false();  //取消自己位于最前;
}

void paihang_Form::fanKuiSearch(int row, int column)
{

    if(ui->searchTableWidget->item(row,column)==NULL||(ui->searchTableWidget->item(row,column)&&ui->searchTableWidget->item(row,column)->text()==tr("")))
    {
        return;
    }


    QString name = ui->searchTableWidget->item(row,1)->text();
    QString carId;
    for(int i =0;i<stuMsg.size();i++)
    {
        if(name == stuMsg.at(i).stu_name)
        {
            carId = QString::number(stuMsg.at(i).stu_id);
        }
    }

    fankui->change_title(name,carId,1);
    fankui->show();
    emit sendFankuiShow();
    set_showflag_false();  //取消自己位于最前;
}

//根据首字母查找
void paihang_Form::lookup(QString firstName)
{
    stuSearchMsg.clear();
    ui->searchTableWidget->clearContents();
    if(sendIndex==0)
    {
        for(int i =0;i< stuMsg.size();i++)
        {
            //if(firstName==stuMsg.at(i).firstname)
            QString abb = stuMsg.at(i).abb;
            if(abb.contains(firstName))
            {
                searchMsg info;
                info.index = i+1;
                info.stu_name = stuMsg.at(i).stu_name;
                info.today_num = stuMsg.at(i).today_num;
                stuSearchMsg.append(info);
            }
        }

        if(stuSearchMsg.size()>0)
        {
            for(int i=0;i<stuSearchMsg.size();i++)
            {
                ui->searchTableWidget->setRowCount(i+1);
                ui->searchTableWidget->setRowHeight(i,50);
                QString stuNmae = stuSearchMsg.at(i).stu_name;
                int today_num = stuSearchMsg.at(i).today_num;
                setItemData(ui->searchTableWidget,i,0,QString::number(stuSearchMsg.at(i).index));
                setItemData(ui->searchTableWidget,i,1,stuNmae);
                setFlower(ui->searchTableWidget,i,today_num);
            }
        }
    }

    if(sendIndex==1)
    {
        for(int i =0;i< stuInfo.size();i++)
        {
            //if(firstName==stuInfo.at(i).firstname)
             QString abb = stuInfo.at(i).abb;
             if(abb.contains(firstName))
             {
                 searchMsg info;
                 info.index = i+1;
                 info.stu_name = stuInfo.at(i).stu_name;
                 info.week_num = stuInfo.at(i).week_num;
                 stuSearchMsg.append(info);
             }
        }


        if(stuSearchMsg.size()>0)
        {
            for(int i=0;i<stuSearchMsg.size();i++)
            {
                ui->searchTableWidget->setRowCount(i+1);
                QString stuNmae = stuSearchMsg.at(i).stu_name;
                int week_num = stuSearchMsg.at(i).week_num;
                setItemData(ui->searchTableWidget,i,0,QString::number(stuSearchMsg.at(i).index));
                setItemData(ui->searchTableWidget,i,1,stuNmae);
                setFlower(ui->searchTableWidget,i,week_num);
            }
        }

    }
}

void paihang_Form::today()
{
    ui->stackedWidget_pauhangxianshi->setCurrentIndex(0);
    ui->stackedWidget_dbaj->setCurrentIndex(0);
    updateUi();
}

void paihang_Form::todayPx()
{
    on_pushButton_jrph_clicked();
}

void paihang_Form::updateUi()
{ 
    stuOrder();
}
void paihang_Form::on_pushButton_clicked()
{
    this->close();
}

void paihang_Form::on_label_no1_clicked()
{

    if(sendIndex == 0)
    {
        if(stuMsg.size()>0)
        {
            QString  name = stuMsg.at(0).stu_name;
            QString carId = QString::number(stuMsg.at(0).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
            set_showflag_false();  //取消自己位于最前
//            set_showflag_true();
            set_my_state_true();
        }
    }
    else
    {
        if(stuInfo.size()>0)
        {
            QString  name = stuInfo.at(0).stu_name;
            QString carId = QString::number(stuInfo.at(0).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
;
        }
    }
}

void paihang_Form::on_label_no2_clicked()
{
    if(sendIndex==0)
    {
        if(stuMsg.size()>1)
        {
            QString  name = stuMsg.at(1).stu_name;
            QString carId = QString::number(stuMsg.at(1).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
            set_showflag_false();  //取消自己位于最前
//            set_showflag_true();
            set_my_state_true();
        }
    }
    else
    {
        if(stuInfo.size()>1)
        {
            QString  name = stuInfo.at(1).stu_name;
            QString carId = QString::number(stuInfo.at(1).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
        }
    }
}

void paihang_Form::on_label_no3_clicked()
{
    set_my_state_true();
    if(sendIndex==0)
    {
        if(stuMsg.size()>2)
        {
            QString  name = stuMsg.at(2).stu_name;
            QString carId = QString::number(stuMsg.at(2).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
            set_showflag_false();  //取消自己位于最前
//            set_showflag_true();
            set_my_state_true();
        }
    }
    else
    {
        if(stuInfo.size()>2)
        {
            QString  name = stuInfo.at(2).stu_name;
            QString carId = QString::number(stuInfo.at(2).stu_id);
            fankui->change_title(name,carId,1);
            fankui->show();
                emit sendFankuiShow();
        }
    }
}
