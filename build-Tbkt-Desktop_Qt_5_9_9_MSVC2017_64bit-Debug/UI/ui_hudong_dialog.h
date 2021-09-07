/********************************************************************************
** Form generated from reading UI file 'hudong_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUDONG_DIALOG_H
#define UI_HUDONG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hudong_Dialog
{
public:
    QGridLayout *gridLayout_13;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_hudongchouti;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *answerStu;
    QLabel *label_4;
    QLabel *allStu;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QLabel *label_m;
    QLabel *label_7;
    QLabel *label_s;
    QSpacerItem *horizontalSpacer_6;
    QStackedWidget *stackedWidget_2;
    QWidget *hdpg_username;
    QGridLayout *gridLayout_9;
    QTableWidget *stu_list;
    QWidget *hdpg_stopans;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QProgressBar *progressBarA;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QProgressBar *progressBarC;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QProgressBar *progressBarNO;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QProgressBar *progressBarE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QProgressBar *progressBarB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QProgressBar *progressBarD;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QProgressBar *progressBarF;
    QWidget *hdpg_ansfenxi;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *toolButton;
    QLabel *rightPeople;
    QWidget *widget_right;
    QGridLayout *gridLayout_10;
    QTableWidget *rightTable;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButton_false;
    QLabel *errorPeople;
    QWidget *widget_right_2;
    QGridLayout *gridLayout_11;
    QTableWidget *errorTable;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *toolButton_none;
    QLabel *invalidPeople;
    QWidget *widget_right_3;
    QGridLayout *gridLayout_12;
    QTableWidget *invalidTable;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_stopans;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_hudong_close;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QPushButton *praiseButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_ans_fenxi;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_hudong_close_2;

    void setupUi(QDialog *hudong_Dialog)
    {
        if (hudong_Dialog->objectName().isEmpty())
            hudong_Dialog->setObjectName(QStringLiteral("hudong_Dialog"));
        hudong_Dialog->resize(600, 800);
        hudong_Dialog->setMinimumSize(QSize(480, 800));
        hudong_Dialog->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        hudong_Dialog->setWindowIcon(icon);
        hudong_Dialog->setStyleSheet(QLatin1String("QWidget#widget_3,#widget_4{\n"
"background-color: rgb(220, 240, 245);\n"
"	border-style: solid;\n"
"	border-right-color: rgb#8d8a8a;\n"
"    border-width: 2px;\n"
"    border-radius: 20px;\n"
"		\n"
"}"));
        gridLayout_13 = new QGridLayout(hudong_Dialog);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, -1, -1, -1);
        frame_2 = new QFrame(hudong_Dialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, -1, -1, -1);
        horizontalSpacer_10 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        pushButton_hudongchouti = new QPushButton(frame_2);
        pushButton_hudongchouti->setObjectName(QStringLiteral("pushButton_hudongchouti"));
        pushButton_hudongchouti->setMinimumSize(QSize(35, 70));
        pushButton_hudongchouti->setMaximumSize(QSize(35, 70));
        pushButton_hudongchouti->setStyleSheet(QLatin1String("QPushButton { \n"
"    background-color:#ffffff;\n"
"    min-width: 35px;\n"
"    max-width: 35px;\n"
"    max-height: 70px;\n"
"    min-height: 70px;\n"
"    border-top-left-radius:35px;\n"
" border-bottom-left-radius:35px;\n"
" border-top-right-radius:0px;\n"
" border-bottom-right-radius:0px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/admin/Desktop/kezhong_sys_qt/Images/Images/\346\214\207\345\220\221-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_hudongchouti->setIcon(icon1);
        pushButton_hudongchouti->setIconSize(QSize(30, 30));

        gridLayout_5->addWidget(pushButton_hudongchouti, 0, 1, 1, 1);

        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(450, 700));
        frame->setMaximumSize(QSize(460, 800));
        frame->setStyleSheet(QLatin1String("QFrame#frame {\n"
"	background-color: rgb(255, 255, 255);\n"
"    border-style: solid;\n"
"    border-width:2px;\n"
"    border-color: rgb(255,255,255);\n"
"    border-radius: 20px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(220, 60));
        widget_3->setMaximumSize(QSize(220, 60));
        widget_3->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(33, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 40));
        label->setMaximumSize(QSize(40, 40));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Images/\346\265\234\347\203\230\346\232\237.png);"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        answerStu = new QLabel(widget_3);
        answerStu->setObjectName(QStringLiteral("answerStu"));
        answerStu->setMinimumSize(QSize(40, 40));
        answerStu->setMaximumSize(QSize(20, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        answerStu->setFont(font);
        answerStu->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(answerStu, 0, 2, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(20, 40));
        label_4->setMaximumSize(QSize(20, 40));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        allStu = new QLabel(widget_3);
        allStu->setObjectName(QStringLiteral("allStu"));
        allStu->setMinimumSize(QSize(40, 40));
        allStu->setMaximumSize(QSize(40, 40));
        allStu->setFont(font);
        allStu->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_2->addWidget(allStu, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(33, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 5, 1, 1);


        gridLayout_4->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(frame);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(220, 60));
        widget_4->setMaximumSize(QSize(220, 60));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Images/\351\217\203\345\240\225\346\243\277.png);"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_m = new QLabel(widget_4);
        label_m->setObjectName(QStringLiteral("label_m"));
        label_m->setMinimumSize(QSize(40, 40));
        label_m->setMaximumSize(QSize(20, 40));
        label_m->setFont(font);
        label_m->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_m, 0, 2, 1, 1);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(10, 40));
        label_7->setMaximumSize(QSize(10, 40));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        label_s = new QLabel(widget_4);
        label_s->setObjectName(QStringLiteral("label_s"));
        label_s->setMinimumSize(QSize(40, 40));
        label_s->setMaximumSize(QSize(20, 40));
        label_s->setFont(font);
        label_s->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(label_s, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 5, 1, 1);


        gridLayout_4->addWidget(widget_4, 0, 1, 1, 1);

        stackedWidget_2 = new QStackedWidget(frame);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setMinimumSize(QSize(450, 550));
        stackedWidget_2->setMaximumSize(QSize(450, 560));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid;\n"
"	border-top-color:rgb(0,0,0);\n"
"    border-width: 0.4px;}\n"
"QLabel\n"
"{\n"
"	color: rgba(200, 200, 200, 200);	\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QTableWidget::item:selected {  \n"
"		background-color: rgb(255,255, 255);        \n"
"}\n"
""));
        hdpg_username = new QWidget();
        hdpg_username->setObjectName(QStringLiteral("hdpg_username"));
        gridLayout_9 = new QGridLayout(hdpg_username);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        stu_list = new QTableWidget(hdpg_username);
        stu_list->setObjectName(QStringLiteral("stu_list"));
        QFont font1;
        font1.setPointSize(16);
        stu_list->setFont(font1);
        stu_list->setShowGrid(false);
        stu_list->horizontalHeader()->setVisible(false);
        stu_list->horizontalHeader()->setHighlightSections(false);
        stu_list->verticalHeader()->setVisible(false);
        stu_list->verticalHeader()->setHighlightSections(false);

        gridLayout_9->addWidget(stu_list, 0, 0, 1, 1);

        stackedWidget_2->addWidget(hdpg_username);
        hdpg_stopans = new QWidget();
        hdpg_stopans->setObjectName(QStringLiteral("hdpg_stopans"));
        hdpg_stopans->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	border: 1px solid #e4f0ff;\n"
"	background-color:#e4f0ff; 		 \n"
"	border-radius:10px ;\n"
"	text-align:right;\n"
"	color:#515454;\n"
"	font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	boder-style: inset;\n"
"}\n"
"QProgressBar::chunk{\n"
"	background-color:#398fff;\n"
"	border-radius:10px ;  \n"
"	margin:0px;\n"
"}"));
        gridLayout_6 = new QGridLayout(hdpg_stopans);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 20, -1, 20);
        label_6 = new QLabel(hdpg_stopans);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_6->setFont(font2);

        horizontalLayout->addWidget(label_6);

        progressBarA = new QProgressBar(hdpg_stopans);
        progressBarA->setObjectName(QStringLiteral("progressBarA"));
        progressBarA->setMinimumSize(QSize(300, 30));
        progressBarA->setMaximumSize(QSize(300, 30));
        progressBarA->setValue(0);

        horizontalLayout->addWidget(progressBarA);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 7, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 20);
        label_10 = new QLabel(hdpg_stopans);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(60, 16777215));
        label_10->setFont(font2);

        horizontalLayout_4->addWidget(label_10);

        progressBarC = new QProgressBar(hdpg_stopans);
        progressBarC->setObjectName(QStringLiteral("progressBarC"));
        progressBarC->setMinimumSize(QSize(300, 30));
        progressBarC->setMaximumSize(QSize(300, 30));
        progressBarC->setValue(0);

        horizontalLayout_4->addWidget(progressBarC);


        gridLayout_6->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 20);
        label_12 = new QLabel(hdpg_stopans);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(60, 16777215));
        label_12->setFont(font2);

        horizontalLayout_6->addWidget(label_12);

        progressBarNO = new QProgressBar(hdpg_stopans);
        progressBarNO->setObjectName(QStringLiteral("progressBarNO"));
        progressBarNO->setMinimumSize(QSize(300, 30));
        progressBarNO->setMaximumSize(QSize(300, 30));
        progressBarNO->setValue(100);

        horizontalLayout_6->addWidget(progressBarNO);


        gridLayout_6->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 20);
        label_14 = new QLabel(hdpg_stopans);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(60, 16777215));
        label_14->setFont(font2);

        horizontalLayout_8->addWidget(label_14);

        progressBarE = new QProgressBar(hdpg_stopans);
        progressBarE->setObjectName(QStringLiteral("progressBarE"));
        progressBarE->setMinimumSize(QSize(300, 30));
        progressBarE->setMaximumSize(QSize(300, 30));
        progressBarE->setValue(0);

        horizontalLayout_8->addWidget(progressBarE);


        gridLayout_6->addLayout(horizontalLayout_8, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 20);
        label_8 = new QLabel(hdpg_stopans);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(60, 16777215));
        label_8->setFont(font2);

        horizontalLayout_2->addWidget(label_8);

        progressBarB = new QProgressBar(hdpg_stopans);
        progressBarB->setObjectName(QStringLiteral("progressBarB"));
        progressBarB->setMinimumSize(QSize(300, 30));
        progressBarB->setMaximumSize(QSize(300, 30));
        progressBarB->setValue(0);

        horizontalLayout_2->addWidget(progressBarB);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 20);
        label_9 = new QLabel(hdpg_stopans);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(60, 16777215));
        label_9->setFont(font2);

        horizontalLayout_3->addWidget(label_9);

        progressBarD = new QProgressBar(hdpg_stopans);
        progressBarD->setObjectName(QStringLiteral("progressBarD"));
        progressBarD->setMinimumSize(QSize(300, 30));
        progressBarD->setMaximumSize(QSize(300, 30));
        progressBarD->setValue(0);

        horizontalLayout_3->addWidget(progressBarD);


        gridLayout_6->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 20);
        label_13 = new QLabel(hdpg_stopans);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(60, 16777215));
        label_13->setFont(font2);

        horizontalLayout_7->addWidget(label_13);

        progressBarF = new QProgressBar(hdpg_stopans);
        progressBarF->setObjectName(QStringLiteral("progressBarF"));
        progressBarF->setMinimumSize(QSize(300, 30));
        progressBarF->setMaximumSize(QSize(300, 30));
        progressBarF->setValue(0);

        horizontalLayout_7->addWidget(progressBarF);


        gridLayout_6->addLayout(horizontalLayout_7, 5, 0, 1, 1);

        stackedWidget_2->addWidget(hdpg_stopans);
        hdpg_ansfenxi = new QWidget();
        hdpg_ansfenxi->setObjectName(QStringLiteral("hdpg_ansfenxi"));
        hdpg_ansfenxi->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"	color: rgb(0, 255, 0);\n"
"	font: 75 14pt \"Microsoft YaHei UI\";\n"
"}\n"
"QLabel\n"
"{\n"
"	color: rgb(0, 255, 0);\n"
"}\n"
"Qlabel#label_16\n"
"{\n"
"	\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        gridLayout_8 = new QGridLayout(hdpg_ansfenxi);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        toolButton = new QToolButton(hdpg_ansfenxi);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\255\243\347\241\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(25, 25));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_9->addWidget(toolButton);

        rightPeople = new QLabel(hdpg_ansfenxi);
        rightPeople->setObjectName(QStringLiteral("rightPeople"));

        horizontalLayout_9->addWidget(rightPeople);


        verticalLayout->addLayout(horizontalLayout_9);

        widget_right = new QWidget(hdpg_ansfenxi);
        widget_right->setObjectName(QStringLiteral("widget_right"));
        widget_right->setMinimumSize(QSize(420, 180));
        gridLayout_10 = new QGridLayout(widget_right);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        rightTable = new QTableWidget(widget_right);
        rightTable->setObjectName(QStringLiteral("rightTable"));
        rightTable->setFont(font1);
        rightTable->setShowGrid(false);
        rightTable->horizontalHeader()->setVisible(false);
        rightTable->horizontalHeader()->setHighlightSections(false);
        rightTable->verticalHeader()->setVisible(false);
        rightTable->verticalHeader()->setHighlightSections(false);

        gridLayout_10->addWidget(rightTable, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_right);


        gridLayout_8->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        toolButton_false = new QToolButton(hdpg_ansfenxi);
        toolButton_false->setObjectName(QStringLiteral("toolButton_false"));
        toolButton_false->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Images/\351\224\231\350\257\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_false->setIcon(icon3);
        toolButton_false->setIconSize(QSize(25, 25));
        toolButton_false->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_10->addWidget(toolButton_false);

        errorPeople = new QLabel(hdpg_ansfenxi);
        errorPeople->setObjectName(QStringLiteral("errorPeople"));
        errorPeople->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_10->addWidget(errorPeople);


        verticalLayout_2->addLayout(horizontalLayout_10);

        widget_right_2 = new QWidget(hdpg_ansfenxi);
        widget_right_2->setObjectName(QStringLiteral("widget_right_2"));
        widget_right_2->setMinimumSize(QSize(420, 180));
        gridLayout_11 = new QGridLayout(widget_right_2);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        errorTable = new QTableWidget(widget_right_2);
        errorTable->setObjectName(QStringLiteral("errorTable"));
        errorTable->setFont(font1);
        errorTable->setShowGrid(false);
        errorTable->horizontalHeader()->setVisible(false);
        errorTable->horizontalHeader()->setHighlightSections(false);
        errorTable->verticalHeader()->setVisible(false);
        errorTable->verticalHeader()->setHighlightSections(false);

        gridLayout_11->addWidget(errorTable, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_right_2);


        gridLayout_8->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        toolButton_none = new QToolButton(hdpg_ansfenxi);
        toolButton_none->setObjectName(QStringLiteral("toolButton_none"));
        toolButton_none->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\227\240\346\225\210\346\236\234.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_none->setIcon(icon4);
        toolButton_none->setIconSize(QSize(25, 25));
        toolButton_none->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_11->addWidget(toolButton_none);

        invalidPeople = new QLabel(hdpg_ansfenxi);
        invalidPeople->setObjectName(QStringLiteral("invalidPeople"));
        invalidPeople->setStyleSheet(QStringLiteral("color: rgb(200, 200, 200);"));

        horizontalLayout_11->addWidget(invalidPeople);


        verticalLayout_3->addLayout(horizontalLayout_11);

        widget_right_3 = new QWidget(hdpg_ansfenxi);
        widget_right_3->setObjectName(QStringLiteral("widget_right_3"));
        widget_right_3->setMinimumSize(QSize(420, 180));
        gridLayout_12 = new QGridLayout(widget_right_3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        invalidTable = new QTableWidget(widget_right_3);
        invalidTable->setObjectName(QStringLiteral("invalidTable"));
        invalidTable->setFont(font1);
        invalidTable->setShowGrid(false);
        invalidTable->horizontalHeader()->setVisible(false);
        invalidTable->horizontalHeader()->setHighlightSections(false);
        invalidTable->verticalHeader()->setVisible(false);
        invalidTable->verticalHeader()->setHighlightSections(false);

        gridLayout_12->addWidget(invalidTable, 0, 0, 1, 1);


        verticalLayout_3->addWidget(widget_right_3);


        gridLayout_8->addLayout(verticalLayout_3, 2, 0, 1, 1);

        stackedWidget_2->addWidget(hdpg_ansfenxi);

        gridLayout_4->addWidget(stackedWidget_2, 1, 0, 1, 2);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(450, 60));
        stackedWidget->setMaximumSize(QSize(450, 50));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-style: solid;\n"
"	border-top-color: rgb(200,200, 200);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:#e0f0ff;	\n"
"    border-radius: 20px;\n"
"	color:#297aff;	\n"
"	font: 400 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#e0f0ff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        gridLayout = new QGridLayout(stackedWidgetPage1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(66, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_stopans = new QPushButton(stackedWidgetPage1);
        pushButton_stopans->setObjectName(QStringLiteral("pushButton_stopans"));
        pushButton_stopans->setMinimumSize(QSize(140, 45));

        gridLayout->addWidget(pushButton_stopans, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        pushButton_hudong_close = new QPushButton(stackedWidgetPage1);
        pushButton_hudong_close->setObjectName(QStringLiteral("pushButton_hudong_close"));
        pushButton_hudong_close->setMinimumSize(QSize(140, 45));

        gridLayout->addWidget(pushButton_hudong_close, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(66, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        stackedWidget->addWidget(stackedWidgetPage1);
        pushButton_hudong_close->raise();
        pushButton_stopans->raise();
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        praiseButton = new QPushButton(page);
        praiseButton->setObjectName(QStringLiteral("praiseButton"));
        praiseButton->setMinimumSize(QSize(130, 45));

        gridLayout_7->addWidget(praiseButton, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        pushButton_ans_fenxi = new QPushButton(page);
        pushButton_ans_fenxi->setObjectName(QStringLiteral("pushButton_ans_fenxi"));
        pushButton_ans_fenxi->setMinimumSize(QSize(130, 45));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_ans_fenxi->setFont(font3);

        gridLayout_7->addWidget(pushButton_ans_fenxi, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_9, 0, 3, 1, 1);

        pushButton_hudong_close_2 = new QPushButton(page);
        pushButton_hudong_close_2->setObjectName(QStringLiteral("pushButton_hudong_close_2"));
        pushButton_hudong_close_2->setMinimumSize(QSize(130, 45));
        pushButton_hudong_close_2->setFont(font3);

        gridLayout_7->addWidget(pushButton_hudong_close_2, 0, 4, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout_4->addWidget(stackedWidget, 2, 0, 1, 2);


        gridLayout_5->addWidget(frame, 0, 2, 1, 1);


        gridLayout_13->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(hudong_Dialog);

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(hudong_Dialog);
    } // setupUi

    void retranslateUi(QDialog *hudong_Dialog)
    {
        hudong_Dialog->setWindowTitle(QApplication::translate("hudong_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_hudongchouti->setText(QString());
        label->setText(QString());
        answerStu->setText(QApplication::translate("hudong_Dialog", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("hudong_Dialog", "/", Q_NULLPTR));
        allStu->setText(QApplication::translate("hudong_Dialog", "7", Q_NULLPTR));
        label_2->setText(QString());
        label_m->setText(QApplication::translate("hudong_Dialog", "00", Q_NULLPTR));
        label_7->setText(QApplication::translate("hudong_Dialog", ":", Q_NULLPTR));
        label_s->setText(QApplication::translate("hudong_Dialog", "00", Q_NULLPTR));
        label_6->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271A", Q_NULLPTR));
        label_10->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271C", Q_NULLPTR));
        label_12->setText(QApplication::translate("hudong_Dialog", "\346\227\240\346\225\210", Q_NULLPTR));
        label_14->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271E", Q_NULLPTR));
        label_8->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271B", Q_NULLPTR));
        label_9->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271D", Q_NULLPTR));
        label_13->setText(QApplication::translate("hudong_Dialog", "\351\200\211\351\241\271F", Q_NULLPTR));
        toolButton->setText(QApplication::translate("hudong_Dialog", " \346\255\243\347\241\256", Q_NULLPTR));
        rightPeople->setText(QApplication::translate("hudong_Dialog", "(0)\344\272\272", Q_NULLPTR));
        toolButton_false->setText(QApplication::translate("hudong_Dialog", "\351\224\231\350\257\257", Q_NULLPTR));
        errorPeople->setText(QApplication::translate("hudong_Dialog", "(0)\344\272\272", Q_NULLPTR));
        toolButton_none->setText(QApplication::translate("hudong_Dialog", "\346\227\240\346\225\210", Q_NULLPTR));
        invalidPeople->setText(QApplication::translate("hudong_Dialog", "(0)\344\272\272", Q_NULLPTR));
        pushButton_stopans->setText(QApplication::translate("hudong_Dialog", "\345\201\234\346\255\242\347\255\224\351\242\230", Q_NULLPTR));
        pushButton_hudong_close->setText(QApplication::translate("hudong_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        praiseButton->setText(QApplication::translate("hudong_Dialog", "\344\270\200\351\224\256\350\241\250\346\211\254", Q_NULLPTR));
        pushButton_ans_fenxi->setText(QApplication::translate("hudong_Dialog", "\347\255\224\351\242\230\347\273\223\346\236\234", Q_NULLPTR));
        pushButton_hudong_close_2->setText(QApplication::translate("hudong_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hudong_Dialog: public Ui_hudong_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUDONG_DIALOG_H
