/********************************************************************************
** Form generated from reading UI file 'huaban_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUABAN_FORM_H
#define UI_HUABAN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <drawwidget.h>

QT_BEGIN_NAMESPACE

class Ui_huaban_Form
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_huabanclose;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    drawwidget *page_1;
    drawwidget *page_2;
    drawwidget *page_3;
    drawwidget *page_4;
    drawwidget *page_5;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_huabanleft;
    QPushButton *pushButton_huabanright;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QPushButton *huaban_huabi;
    QPushButton *huaban_era;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_heise;
    QPushButton *pushButton_chengse;
    QPushButton *pushButton_huangse;
    QPushButton *pushButton_huise;
    QPushButton *pushButton_hongse;
    QPushButton *pushButton_baise;
    QPushButton *pushButton_lvse;
    QPushButton *pushButton_lanse;
    QPushButton *pushButton_qingse;
    QPushButton *pushButton_fense;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *huaban_unm;
    QPushButton *huaban_del;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *huaban_Form)
    {
        if (huaban_Form->objectName().isEmpty())
            huaban_Form->setObjectName(QStringLiteral("huaban_Form"));
        huaban_Form->resize(1800, 900);
        huaban_Form->setMinimumSize(QSize(1800, 900));
        huaban_Form->setMaximumSize(QSize(1800, 900));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        huaban_Form->setWindowIcon(icon);
        huaban_Form->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(240, 240, 240);\n"
" border-style: solid;\n"
"	border-color: rgb(240, 240, 240);\n"
" border-width: 2px;\n"
"    border-radius: 30px;\n"
"}\n"
"QWidget#page_1,#page_2,#page_3,#page_4,#page_5{\n"
"	background-color: rgb(240, 240, 240);\n"
"}\n"
"QWidget#widget,#page{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"	background-color: rgb(240, 240, 240);\n"
"	color: rgb(85, 170, 255);\n"
"	font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgba(200, 200, 200,0); \n"
"    border-radius: 30px;\n"
"\n"
"    background-color:transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,0.1);\n"
"    background-color:rgba(200,200,200,0.1);\n"
"}\n"
"QPushButton:pressed{\n"
"	color:rgba(0,255,0);\n"
"	border-color:rgba(200,200,200,1);\n"
"}"));
        gridLayout = new QGridLayout(huaban_Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(huaban_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(1600, 900));
        frame->setMaximumSize(QSize(1800, 900));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(739, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 50));
        label->setMaximumSize(QSize(30, 50));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 50));
        label_2->setMaximumSize(QSize(30, 50));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 50));
        label_3->setMaximumSize(QSize(30, 50));

        horizontalLayout->addWidget(label_3);


        gridLayout_2->addLayout(horizontalLayout, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(739, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 3);

        pushButton_huabanclose = new QPushButton(frame);
        pushButton_huabanclose->setObjectName(QStringLiteral("pushButton_huabanclose"));
        pushButton_huabanclose->setMaximumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/Flase.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huabanclose->setIcon(icon1);
        pushButton_huabanclose->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(pushButton_huabanclose, 0, 7, 1, 1);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(1600, 500));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255,1);"));
        page_1 = new drawwidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        stackedWidget->addWidget(page_1);
        page_2 = new drawwidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new drawwidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_4 = new drawwidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        page_5 = new drawwidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedWidget->addWidget(page_5);

        gridLayout_2->addWidget(stackedWidget, 1, 1, 3, 6);

        verticalSpacer_3 = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 7, 1, 1);

        pushButton_huabanleft = new QPushButton(frame);
        pushButton_huabanleft->setObjectName(QStringLiteral("pushButton_huabanleft"));
        pushButton_huabanleft->setMinimumSize(QSize(60, 60));
        pushButton_huabanleft->setMaximumSize(QSize(60, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\214\207\345\220\221-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huabanleft->setIcon(icon2);
        pushButton_huabanleft->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(pushButton_huabanleft, 2, 0, 1, 1);

        pushButton_huabanright = new QPushButton(frame);
        pushButton_huabanright->setObjectName(QStringLiteral("pushButton_huabanright"));
        pushButton_huabanright->setMaximumSize(QSize(60, 60));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\214\207\345\220\221-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huabanright->setIcon(icon3);
        pushButton_huabanright->setIconSize(QSize(60, 60));

        gridLayout_2->addWidget(pushButton_huabanright, 2, 7, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 189, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(317, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(1000, 150));
        widget->setMaximumSize(QSize(1200, 150));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        huaban_huabi = new QPushButton(groupBox);
        huaban_huabi->setObjectName(QStringLiteral("huaban_huabi"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\224\273\347\254\224.png"), QSize(), QIcon::Normal, QIcon::Off);
        huaban_huabi->setIcon(icon4);
        huaban_huabi->setIconSize(QSize(50, 50));

        gridLayout_7->addWidget(huaban_huabi, 0, 0, 1, 1);

        huaban_era = new QPushButton(groupBox);
        huaban_era->setObjectName(QStringLiteral("huaban_era"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\251\241\347\232\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        huaban_era->setIcon(icon5);
        huaban_era->setIconSize(QSize(50, 50));

        gridLayout_7->addWidget(huaban_era, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(50, 50));

        gridLayout_6->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(50, 50));

        gridLayout_6->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon8);
        pushButton_5->setIconSize(QSize(30, 30));

        gridLayout_6->addWidget(pushButton_5, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(200, 200, 200); \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,0.5);\n"
"    background-color:rgba(200,200,200,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"	color:rgba(0,255,0);\n"
"	border-color:rgba(200,200,200,1);\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_heise = new QPushButton(groupBox_3);
        pushButton_heise->setObjectName(QStringLiteral("pushButton_heise"));
        pushButton_heise->setMinimumSize(QSize(20, 20));
        pushButton_heise->setMaximumSize(QSize(20, 20));
        pushButton_heise->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(pushButton_heise, 0, 0, 1, 1);

        pushButton_chengse = new QPushButton(groupBox_3);
        pushButton_chengse->setObjectName(QStringLiteral("pushButton_chengse"));
        pushButton_chengse->setMinimumSize(QSize(20, 20));
        pushButton_chengse->setMaximumSize(QSize(20, 20));
        pushButton_chengse->setStyleSheet(QStringLiteral("background-color:rgb(255, 170, 0);"));

        gridLayout_3->addWidget(pushButton_chengse, 0, 1, 1, 1);

        pushButton_huangse = new QPushButton(groupBox_3);
        pushButton_huangse->setObjectName(QStringLiteral("pushButton_huangse"));
        pushButton_huangse->setMinimumSize(QSize(20, 20));
        pushButton_huangse->setMaximumSize(QSize(20, 20));
        pushButton_huangse->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));

        gridLayout_3->addWidget(pushButton_huangse, 0, 2, 1, 1);

        pushButton_huise = new QPushButton(groupBox_3);
        pushButton_huise->setObjectName(QStringLiteral("pushButton_huise"));
        pushButton_huise->setMinimumSize(QSize(20, 20));
        pushButton_huise->setMaximumSize(QSize(20, 20));
        pushButton_huise->setStyleSheet(QStringLiteral("background-color: rgb(100,100,100);"));

        gridLayout_3->addWidget(pushButton_huise, 0, 3, 1, 1);

        pushButton_hongse = new QPushButton(groupBox_3);
        pushButton_hongse->setObjectName(QStringLiteral("pushButton_hongse"));
        pushButton_hongse->setMinimumSize(QSize(20, 20));
        pushButton_hongse->setMaximumSize(QSize(20, 20));
        pushButton_hongse->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        gridLayout_3->addWidget(pushButton_hongse, 0, 4, 1, 1);

        pushButton_baise = new QPushButton(groupBox_3);
        pushButton_baise->setObjectName(QStringLiteral("pushButton_baise"));
        pushButton_baise->setMinimumSize(QSize(20, 20));
        pushButton_baise->setMaximumSize(QSize(20, 20));
        pushButton_baise->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(pushButton_baise, 1, 0, 1, 1);

        pushButton_lvse = new QPushButton(groupBox_3);
        pushButton_lvse->setObjectName(QStringLiteral("pushButton_lvse"));
        pushButton_lvse->setMinimumSize(QSize(20, 20));
        pushButton_lvse->setMaximumSize(QSize(20, 20));
        pushButton_lvse->setStyleSheet(QStringLiteral("background-color: rgb(0,255,0);"));

        gridLayout_3->addWidget(pushButton_lvse, 1, 1, 1, 1);

        pushButton_lanse = new QPushButton(groupBox_3);
        pushButton_lanse->setObjectName(QStringLiteral("pushButton_lanse"));
        pushButton_lanse->setMinimumSize(QSize(20, 20));
        pushButton_lanse->setMaximumSize(QSize(20, 20));
        pushButton_lanse->setStyleSheet(QLatin1String("background-color:rgb(50, 100, 150);\n"
""));

        gridLayout_3->addWidget(pushButton_lanse, 1, 2, 1, 1);

        pushButton_qingse = new QPushButton(groupBox_3);
        pushButton_qingse->setObjectName(QStringLiteral("pushButton_qingse"));
        pushButton_qingse->setMinimumSize(QSize(20, 20));
        pushButton_qingse->setMaximumSize(QSize(20, 20));
        pushButton_qingse->setStyleSheet(QStringLiteral("background-color: rgb(0,255,255);"));

        gridLayout_3->addWidget(pushButton_qingse, 1, 3, 1, 1);

        pushButton_fense = new QPushButton(groupBox_3);
        pushButton_fense->setObjectName(QStringLiteral("pushButton_fense"));
        pushButton_fense->setMinimumSize(QSize(20, 20));
        pushButton_fense->setMaximumSize(QSize(20, 20));
        pushButton_fense->setStyleSheet(QStringLiteral("background-color:rgb(255, 85, 255);"));

        gridLayout_3->addWidget(pushButton_fense, 1, 4, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        huaban_unm = new QPushButton(groupBox_4);
        huaban_unm->setObjectName(QStringLiteral("huaban_unm"));
        huaban_unm->setMinimumSize(QSize(50, 50));
        huaban_unm->setMaximumSize(QSize(50, 50));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/Images/27\346\222\244\351\224\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        huaban_unm->setIcon(icon9);
        huaban_unm->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(huaban_unm, 0, 0, 1, 1);

        huaban_del = new QPushButton(groupBox_4);
        huaban_del->setObjectName(QStringLiteral("huaban_del"));
        huaban_del->setMinimumSize(QSize(50, 50));
        huaban_del->setMaximumSize(QSize(50, 50));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/Images/\345\210\240 \351\231\244.png"), QSize(), QIcon::Normal, QIcon::Off);
        huaban_del->setIcon(icon10);
        huaban_del->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(huaban_del, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 4, 2, 2, 3);

        horizontalSpacer_6 = new QSpacerItem(317, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 5, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 5, 6, 1, 2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(huaban_Form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(huaban_Form);
    } // setupUi

    void retranslateUi(QWidget *huaban_Form)
    {
        huaban_Form->setWindowTitle(QApplication::translate("huaban_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label->setText(QApplication::translate("huaban_Form", "1", Q_NULLPTR));
        label_2->setText(QApplication::translate("huaban_Form", "/", Q_NULLPTR));
        label_3->setText(QApplication::translate("huaban_Form", "5", Q_NULLPTR));
        pushButton_huabanclose->setText(QString());
        pushButton_huabanleft->setText(QString());
        pushButton_huabanright->setText(QString());
        groupBox->setTitle(QApplication::translate("huaban_Form", "\347\224\273\347\254\224\346\251\241\347\232\256", Q_NULLPTR));
        huaban_huabi->setText(QString());
        huaban_era->setText(QString());
        groupBox_2->setTitle(QApplication::translate("huaban_Form", "\347\224\273\347\254\224\347\262\227\347\273\206", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        groupBox_3->setTitle(QApplication::translate("huaban_Form", "\347\224\273\347\254\224\351\242\234\350\211\262", Q_NULLPTR));
        pushButton_heise->setText(QString());
        pushButton_chengse->setText(QString());
        pushButton_huangse->setText(QString());
        pushButton_huise->setText(QString());
        pushButton_hongse->setText(QString());
        pushButton_baise->setText(QString());
        pushButton_lvse->setText(QString());
        pushButton_lanse->setText(QString());
        pushButton_qingse->setText(QString());
        pushButton_fense->setText(QString());
        groupBox_4->setTitle(QApplication::translate("huaban_Form", "\346\222\244\351\224\200\345\210\240\351\231\244", Q_NULLPTR));
        huaban_unm->setText(QString());
        huaban_del->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class huaban_Form: public Ui_huaban_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUABAN_FORM_H
