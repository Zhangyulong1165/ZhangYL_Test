/********************************************************************************
** Form generated from reading UI file 'paihang_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAIHANG_FORM_H
#define UI_PAIHANG_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paihang_Form
{
public:
    QGridLayout *gridLayout_7;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_jrph;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_bzph;
    QStackedWidget *stackedWidget_pauhangxianshi;
    QWidget *stackedWidget_pauhangxianshipage1;
    QTableWidget *tableWidget;
    QWidget *widget_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_3;
    QPushButton *label_no22;
    QPushButton *label_no11;
    QPushButton *label_no33;
    QPushButton *label_no2;
    QPushButton *label_no1;
    QPushButton *label_no3;
    QWidget *stackedWidget_pauhangxianshi_duoxuan;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QTableWidget *choicetableWidget;
    QCheckBox *moreCheckBox;
    QWidget *stackedWidget_pauhangxianshi_chazhao;
    QGridLayout *gridLayout_6;
    QTableWidget *searchTableWidget;
    QStackedWidget *stackedWidget_dbaj;
    QWidget *stackedWidget_dbaj_1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_chazhao;
    QPushButton *pushButton_jinri_duoxuan;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QWidget *stackedWidget_dbaj_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_dxqd;
    QPushButton *pushButton_dxqx;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QWidget *stackedWidget_dbaj_3;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_czqx;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *paihang_Form)
    {
        if (paihang_Form->objectName().isEmpty())
            paihang_Form->setObjectName(QStringLiteral("paihang_Form"));
        paihang_Form->resize(420, 918);
        paihang_Form->setMinimumSize(QSize(420, 800));
        paihang_Form->setMaximumSize(QSize(420, 918));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        paihang_Form->setWindowIcon(icon);
        paihang_Form->setStyleSheet(QLatin1String("QWidget#widget_2,#widget_4{\n"
"	background-color: rgb(117, 99, 255);\n"
"}\n"
"QWidget#widget{\n"
"	\n"
"	background-color:#ffffff;\n"
"	border-style: solid;\n"
"    border-width: 1px;\n"
"	border-color:rgb(255,255,255);\n"
"    border-radius: 30px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(117, 99, 255);\n"
"	border-color:rgba(200,200,200,1);\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(117, 99, 255);\n"
"	color: green;\n"
"}\n"
""));
        gridLayout_7 = new QGridLayout(paihang_Form);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(paihang_Form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(300, 900));
        widget->setMaximumSize(QSize(400, 16777215));
        widget->setStyleSheet(QLatin1String("QTableWidget::item:selected {  \n"
"		background-color: rgb(255,255, 255);        \n"
"}\n"
"\n"
"QTableWidget::Item{border:0px solid rgb(153,153,153);\n"
"border-bottom:1px solid rgb(153,153,153)\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(400, 140));
        widget_2->setMaximumSize(QSize(400, 140));
        widget_2->setStyleSheet(QLatin1String("\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-left-radius:0px;\n"
"\n"
"\n"
"	border-bottom-right-radius:0px;"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 122));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(100, 50));
        label->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color:#7563ff;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_jrph = new QPushButton(layoutWidget);
        pushButton_jrph->setObjectName(QStringLiteral("pushButton_jrph"));
        sizePolicy.setHeightForWidth(pushButton_jrph->sizePolicy().hasHeightForWidth());
        pushButton_jrph->setSizePolicy(sizePolicy);
        pushButton_jrph->setMinimumSize(QSize(120, 60));
        pushButton_jrph->setMaximumSize(QSize(120, 60));
        pushButton_jrph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"	border-bottom-color: rgb(200,200, 200);\n"
"	border-right-color: rgb(117, 99, 255);\n"
"	border-top-color:rgb(117, 99, 255);\n"
"	border-left-color: rgb(117, 99, 255);\n"
"    border-width: 3px;	\n"
"    border-radius: 0px;\n"
"	color: rgb(200,200,200);\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color: rgb(117, 99, 255);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color:#ffffff;\n"
"    background-color: rgb(117, 99, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_jrph);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_bzph = new QPushButton(layoutWidget);
        pushButton_bzph->setObjectName(QStringLiteral("pushButton_bzph"));
        sizePolicy.setHeightForWidth(pushButton_bzph->sizePolicy().hasHeightForWidth());
        pushButton_bzph->setSizePolicy(sizePolicy);
        pushButton_bzph->setMinimumSize(QSize(120, 60));
        pushButton_bzph->setMaximumSize(QSize(120, 60));
        pushButton_bzph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-style: solid;\n"
"	border-bottom-color: rgb(200,200, 200);\n"
"	border-right-color: rgb(117, 99, 255);\n"
"	border-top-color:rgb(117, 99, 255);\n"
"	border-left-color: rgb(117, 99, 255);\n"
"    border-width: 3px;	\n"
"    border-radius: 0px;\n"
"	color: rgb(200,200,200);\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color: rgb(117, 99, 255);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color:#ffffff;\n"
"    background-color: rgb(117, 99, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_bzph);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        stackedWidget_pauhangxianshi = new QStackedWidget(widget);
        stackedWidget_pauhangxianshi->setObjectName(QStringLiteral("stackedWidget_pauhangxianshi"));
        stackedWidget_pauhangxianshi->setMinimumSize(QSize(400, 500));
        stackedWidget_pauhangxianshi->setMaximumSize(QSize(400, 16777215));
        stackedWidget_pauhangxianshi->setStyleSheet(QStringLiteral(""));
        stackedWidget_pauhangxianshipage1 = new QWidget();
        stackedWidget_pauhangxianshipage1->setObjectName(QStringLiteral("stackedWidget_pauhangxianshipage1"));
        tableWidget = new QTableWidget(stackedWidget_pauhangxianshipage1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(15, 231, 385, 451));
        tableWidget->setMinimumSize(QSize(385, 0));
        tableWidget->setMaximumSize(QSize(385, 16777215));
        QFont font;
        font.setPointSize(14);
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:none;"));
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        widget_4 = new QWidget(stackedWidget_pauhangxianshipage1);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 400, 231));
        widget_4->setMinimumSize(QSize(400, 230));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, -10, 90, 90));
        label_2->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/top1.png);"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 50, 60, 60));
        label_3->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/top2.png);"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 60, 60, 60));
        label_4->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/top3.png);"));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(10, 80, 380, 150));
        widget_3->setLayoutDirection(Qt::LeftToRight);
        widget_3->setStyleSheet(QString::fromUtf8("QWidget#widget_3{image: url(:/new/prefix1/Images/desktop.png);}\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton {\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#297aff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        label_no22 = new QPushButton(widget_3);
        label_no22->setObjectName(QStringLiteral("label_no22"));
        label_no22->setGeometry(QRect(10, 100, 91, 31));
        label_no22->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	image: url(:/new/prefix1/Images/f.png);\n"
"	border-style: solid;\n"
"    border-width: 1px;\n"
"	border-color: rgb(87, 104, 255);\n"
"    border-radius: 10px;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 170, 0);	\n"
"	background-color: rgb(87, 104, 255);\n"
"    text-align : right; \n"
"}"));
        label_no11 = new QPushButton(widget_3);
        label_no11->setObjectName(QStringLiteral("label_no11"));
        label_no11->setGeometry(QRect(150, 70, 91, 31));
        label_no11->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	image: url(:/new/prefix1/Images/f.png);\n"
"	border-style: solid;\n"
"    border-width: 1px;\n"
"	border-color: rgb(87, 104, 255);\n"
"    border-radius: 10px;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 170, 0);	\n"
"	background-color: rgb(87, 104, 255);\n"
"    text-align : right; \n"
"}"));
        label_no33 = new QPushButton(widget_3);
        label_no33->setObjectName(QStringLiteral("label_no33"));
        label_no33->setGeometry(QRect(280, 110, 91, 31));
        label_no33->setStyleSheet(QString::fromUtf8("QPushButton{	\n"
"	image: url(:/new/prefix1/Images/f.png);\n"
"	border-style: solid;\n"
"    border-width: 1px;\n"
"	border-color: rgb(87, 104, 255);\n"
"    border-radius: 10px;\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 170, 0);	\n"
"	background-color: rgb(87, 104, 255);\n"
"    text-align : right; \n"
"}"));
        label_no2 = new QPushButton(widget_3);
        label_no2->setObjectName(QStringLiteral("label_no2"));
        label_no2->setGeometry(QRect(20, 50, 91, 41));
        label_no2->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background: transparent;"));
        label_no1 = new QPushButton(widget_3);
        label_no1->setObjectName(QStringLiteral("label_no1"));
        label_no1->setGeometry(QRect(150, 20, 91, 41));
        label_no1->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background: transparent;"));
        label_no3 = new QPushButton(widget_3);
        label_no3->setObjectName(QStringLiteral("label_no3"));
        label_no3->setGeometry(QRect(280, 70, 91, 41));
        label_no3->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background: transparent;"));
        stackedWidget_pauhangxianshi->addWidget(stackedWidget_pauhangxianshipage1);
        stackedWidget_pauhangxianshi_duoxuan = new QWidget();
        stackedWidget_pauhangxianshi_duoxuan->setObjectName(QStringLiteral("stackedWidget_pauhangxianshi_duoxuan"));
        stackedWidget_pauhangxianshi_duoxuan->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(stackedWidget_pauhangxianshi_duoxuan);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        choicetableWidget = new QTableWidget(stackedWidget_pauhangxianshi_duoxuan);
        choicetableWidget->setObjectName(QStringLiteral("choicetableWidget"));
        choicetableWidget->setMaximumSize(QSize(330, 16777215));
        choicetableWidget->setFont(font);
        choicetableWidget->setStyleSheet(QLatin1String("QTableWidget{\n"
"    background:#FFFFFF;           \n"
"    border:none;                   \n"
" \n"
"}   \n"
"\n"
"QTableWidget::indicator {    \n"
"	width: 20px;\n"
"    height: 20px;\n"
"}\n"
"QTableWidget::indicator:unchecked {    \n"
"	image: url(:/new/prefix1/Images/chk_no.png);\n"
"}\n"
"QTableWidget::indicator:checked {   \n"
"	image: url(:/new/prefix1/Images/chk_yes.png);\n"
"}"));
        choicetableWidget->setShowGrid(false);
        choicetableWidget->horizontalHeader()->setVisible(false);
        choicetableWidget->horizontalHeader()->setHighlightSections(false);
        choicetableWidget->verticalHeader()->setVisible(false);
        choicetableWidget->verticalHeader()->setHighlightSections(false);

        gridLayout_3->addWidget(choicetableWidget, 1, 1, 1, 1);

        moreCheckBox = new QCheckBox(stackedWidget_pauhangxianshi_duoxuan);
        moreCheckBox->setObjectName(QStringLiteral("moreCheckBox"));
        moreCheckBox->setMinimumSize(QSize(20, 20));
        moreCheckBox->setStyleSheet(QLatin1String("QCheckBox\n"
"{\n"
"	spacing: 5px;\n"
"	font: 500 14pt \"Microsoft JhengHei UI\";\n"
"}\n"
"QCheckBox::indicator {\n"
"        width:20px;\n"
"        height: 20px;\n"
"        image: url(:/new/prefix1/Images/chk_no.png);\n"
"}\n"
"QCheckBox::indicator:enabled:checked {\n"
"        image: url(:/new/prefix1/Images/chk_yes.png);\n"
"}\n"
"QCheckBox::indicator:enabled:unchecked:pressed {\n"
"\n"
"}"));

        gridLayout_3->addWidget(moreCheckBox, 0, 1, 1, 1);

        stackedWidget_pauhangxianshi->addWidget(stackedWidget_pauhangxianshi_duoxuan);
        stackedWidget_pauhangxianshi_chazhao = new QWidget();
        stackedWidget_pauhangxianshi_chazhao->setObjectName(QStringLiteral("stackedWidget_pauhangxianshi_chazhao"));
        stackedWidget_pauhangxianshi_chazhao->setStyleSheet(QStringLiteral(""));
        gridLayout_6 = new QGridLayout(stackedWidget_pauhangxianshi_chazhao);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        searchTableWidget = new QTableWidget(stackedWidget_pauhangxianshi_chazhao);
        searchTableWidget->setObjectName(QStringLiteral("searchTableWidget"));
        searchTableWidget->setStyleSheet(QLatin1String("\n"
"QTableWidget                 {\n"
"    background:#FFFFFF;           \n"
"    border:none;                   \n"
" \n"
"}            \n"
"    \n"
"               \n"
"\n"
""));
        searchTableWidget->setShowGrid(false);
        searchTableWidget->setWordWrap(true);
        searchTableWidget->horizontalHeader()->setVisible(false);
        searchTableWidget->horizontalHeader()->setHighlightSections(false);
        searchTableWidget->verticalHeader()->setVisible(false);
        searchTableWidget->verticalHeader()->setHighlightSections(false);

        gridLayout_6->addWidget(searchTableWidget, 0, 0, 1, 1);

        stackedWidget_pauhangxianshi->addWidget(stackedWidget_pauhangxianshi_chazhao);

        gridLayout_2->addWidget(stackedWidget_pauhangxianshi, 1, 0, 1, 1);

        stackedWidget_dbaj = new QStackedWidget(widget);
        stackedWidget_dbaj->setObjectName(QStringLiteral("stackedWidget_dbaj"));
        stackedWidget_dbaj->setMinimumSize(QSize(400, 70));
        stackedWidget_dbaj->setMaximumSize(QSize(400, 70));
        stackedWidget_dbaj->setStyleSheet(QString::fromUtf8("QWidget#stackedWidget_2\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
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
        stackedWidget_dbaj_1 = new QWidget();
        stackedWidget_dbaj_1->setObjectName(QStringLiteral("stackedWidget_dbaj_1"));
        gridLayout = new QGridLayout(stackedWidget_dbaj_1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton_chazhao = new QPushButton(stackedWidget_dbaj_1);
        pushButton_chazhao->setObjectName(QStringLiteral("pushButton_chazhao"));
        sizePolicy.setHeightForWidth(pushButton_chazhao->sizePolicy().hasHeightForWidth());
        pushButton_chazhao->setSizePolicy(sizePolicy);
        pushButton_chazhao->setMinimumSize(QSize(120, 45));
        pushButton_chazhao->setMaximumSize(QSize(120, 45));

        gridLayout->addWidget(pushButton_chazhao, 0, 3, 1, 1);

        pushButton_jinri_duoxuan = new QPushButton(stackedWidget_dbaj_1);
        pushButton_jinri_duoxuan->setObjectName(QStringLiteral("pushButton_jinri_duoxuan"));
        sizePolicy.setHeightForWidth(pushButton_jinri_duoxuan->sizePolicy().hasHeightForWidth());
        pushButton_jinri_duoxuan->setSizePolicy(sizePolicy);
        pushButton_jinri_duoxuan->setMinimumSize(QSize(120, 45));
        pushButton_jinri_duoxuan->setMaximumSize(QSize(120, 45));
        pushButton_jinri_duoxuan->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pushButton_jinri_duoxuan, 0, 0, 1, 1);

        pushButton = new QPushButton(stackedWidget_dbaj_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 0, 1, 3);

        stackedWidget_dbaj->addWidget(stackedWidget_dbaj_1);
        stackedWidget_dbaj_2 = new QWidget();
        stackedWidget_dbaj_2->setObjectName(QStringLiteral("stackedWidget_dbaj_2"));
        gridLayout_4 = new QGridLayout(stackedWidget_dbaj_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        pushButton_dxqd = new QPushButton(stackedWidget_dbaj_2);
        pushButton_dxqd->setObjectName(QStringLiteral("pushButton_dxqd"));
        sizePolicy.setHeightForWidth(pushButton_dxqd->sizePolicy().hasHeightForWidth());
        pushButton_dxqd->setSizePolicy(sizePolicy);
        pushButton_dxqd->setMinimumSize(QSize(120, 45));
        pushButton_dxqd->setMaximumSize(QSize(120, 45));
        pushButton_dxqd->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(pushButton_dxqd, 0, 0, 1, 1);

        pushButton_dxqx = new QPushButton(stackedWidget_dbaj_2);
        pushButton_dxqx->setObjectName(QStringLiteral("pushButton_dxqx"));
        sizePolicy.setHeightForWidth(pushButton_dxqx->sizePolicy().hasHeightForWidth());
        pushButton_dxqx->setSizePolicy(sizePolicy);
        pushButton_dxqx->setMinimumSize(QSize(120, 45));
        pushButton_dxqx->setMaximumSize(QSize(120, 45));

        gridLayout_4->addWidget(pushButton_dxqx, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        stackedWidget_dbaj->addWidget(stackedWidget_dbaj_2);
        stackedWidget_dbaj_3 = new QWidget();
        stackedWidget_dbaj_3->setObjectName(QStringLiteral("stackedWidget_dbaj_3"));
        gridLayout_5 = new QGridLayout(stackedWidget_dbaj_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 0, -1, -1);
        pushButton_czqx = new QPushButton(stackedWidget_dbaj_3);
        pushButton_czqx->setObjectName(QStringLiteral("pushButton_czqx"));
        sizePolicy.setHeightForWidth(pushButton_czqx->sizePolicy().hasHeightForWidth());
        pushButton_czqx->setSizePolicy(sizePolicy);
        pushButton_czqx->setMinimumSize(QSize(200, 45));
        pushButton_czqx->setMaximumSize(QSize(120, 45));

        gridLayout_5->addWidget(pushButton_czqx, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        stackedWidget_dbaj->addWidget(stackedWidget_dbaj_3);

        gridLayout_2->addWidget(stackedWidget_dbaj, 2, 0, 1, 1);


        gridLayout_7->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(paihang_Form);

        stackedWidget_pauhangxianshi->setCurrentIndex(0);
        stackedWidget_dbaj->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(paihang_Form);
    } // setupUi

    void retranslateUi(QWidget *paihang_Form)
    {
        paihang_Form->setWindowTitle(QApplication::translate("paihang_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label->setText(QApplication::translate("paihang_Form", " \346\216\222\350\241\214\346\246\234", Q_NULLPTR));
        pushButton_jrph->setText(QApplication::translate("paihang_Form", "\344\273\212\346\227\245\346\216\222\350\241\214", Q_NULLPTR));
        pushButton_bzph->setText(QApplication::translate("paihang_Form", "\346\234\254\345\221\250\346\216\222\350\241\214", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_no22->setText(QString());
        label_no11->setText(QString());
        label_no33->setText(QString());
        label_no2->setText(QString());
        label_no1->setText(QString());
        label_no3->setText(QString());
        moreCheckBox->setText(QApplication::translate("paihang_Form", "\345\205\250\351\200\211", Q_NULLPTR));
        pushButton_chazhao->setText(QApplication::translate("paihang_Form", "\346\237\245\346\211\276", Q_NULLPTR));
        pushButton_jinri_duoxuan->setText(QApplication::translate("paihang_Form", "\345\244\232\351\200\211", Q_NULLPTR));
        pushButton->setText(QApplication::translate("paihang_Form", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_dxqd->setText(QApplication::translate("paihang_Form", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_dxqx->setText(QApplication::translate("paihang_Form", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_czqx->setText(QApplication::translate("paihang_Form", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class paihang_Form: public Ui_paihang_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIHANG_FORM_H
