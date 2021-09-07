/********************************************************************************
** Form generated from reading UI file 'huabi_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUABI_FORM_H
#define UI_HUABI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <ximage.h>

QT_BEGIN_NAMESPACE

class Ui_huabi_Form
{
public:
    QGridLayout *gridLayout;
    XImage *widget_huabu;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QPushButton *huabi_huabi;
    QPushButton *huabi_era;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
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
    QPushButton *huabi_del;
    QPushButton *buabi_unm;
    QPushButton *huabi_close;

    void setupUi(QWidget *huabi_Form)
    {
        if (huabi_Form->objectName().isEmpty())
            huabi_Form->setObjectName(QStringLiteral("huabi_Form"));
        huabi_Form->resize(1920, 1080);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        huabi_Form->setWindowIcon(icon);
        huabi_Form->setStyleSheet(QString::fromUtf8("QWidget#widget,#page{\n"
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
"}\n"
""));
        gridLayout = new QGridLayout(huabi_Form);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_huabu = new XImage(huabi_Form);
        widget_huabu->setObjectName(QStringLiteral("widget_huabu"));
        widget_huabu->setMinimumSize(QSize(1920, 1080));
        widget_huabu->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(widget_huabu);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 473, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        widget = new QWidget(widget_huabu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(800, 100));
        widget->setMaximumSize(QSize(800, 100));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        huabi_huabi = new QPushButton(groupBox);
        huabi_huabi->setObjectName(QStringLiteral("huabi_huabi"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\224\273\347\254\224.png"), QSize(), QIcon::Normal, QIcon::Off);
        huabi_huabi->setIcon(icon1);
        huabi_huabi->setIconSize(QSize(50, 50));

        gridLayout_7->addWidget(huabi_huabi, 0, 0, 1, 1);

        huabi_era = new QPushButton(groupBox);
        huabi_era->setObjectName(QStringLiteral("huabi_era"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\251\241\347\232\256.png"), QSize(), QIcon::Normal, QIcon::Off);
        huabi_era->setIcon(icon2);
        huabi_era->setIconSize(QSize(50, 50));

        gridLayout_7->addWidget(huabi_era, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(120, 16777215));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(30, 30));

        gridLayout_6->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(30, 30));

        gridLayout_6->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setMaximumSize(QSize(30, 30));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/Images/\347\202\271 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(30, 30));

        gridLayout_6->addWidget(pushButton_3, 0, 2, 1, 1);


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
        pushButton_heise->setStyleSheet(QStringLiteral("background-color:#000000;"));

        gridLayout_3->addWidget(pushButton_heise, 0, 0, 1, 1);

        pushButton_chengse = new QPushButton(groupBox_3);
        pushButton_chengse->setObjectName(QStringLiteral("pushButton_chengse"));
        pushButton_chengse->setMinimumSize(QSize(20, 20));
        pushButton_chengse->setMaximumSize(QSize(20, 20));
        pushButton_chengse->setStyleSheet(QStringLiteral("background-color:#808080;"));

        gridLayout_3->addWidget(pushButton_chengse, 0, 1, 1, 1);

        pushButton_huangse = new QPushButton(groupBox_3);
        pushButton_huangse->setObjectName(QStringLiteral("pushButton_huangse"));
        pushButton_huangse->setMinimumSize(QSize(20, 20));
        pushButton_huangse->setMaximumSize(QSize(20, 20));
        pushButton_huangse->setStyleSheet(QStringLiteral("background-color:#f5a623;"));

        gridLayout_3->addWidget(pushButton_huangse, 0, 2, 1, 1);

        pushButton_huise = new QPushButton(groupBox_3);
        pushButton_huise->setObjectName(QStringLiteral("pushButton_huise"));
        pushButton_huise->setMinimumSize(QSize(20, 20));
        pushButton_huise->setMaximumSize(QSize(20, 20));
        pushButton_huise->setStyleSheet(QStringLiteral("background-color:#f8e71c;"));

        gridLayout_3->addWidget(pushButton_huise, 0, 3, 1, 1);

        pushButton_hongse = new QPushButton(groupBox_3);
        pushButton_hongse->setObjectName(QStringLiteral("pushButton_hongse"));
        pushButton_hongse->setMinimumSize(QSize(20, 20));
        pushButton_hongse->setMaximumSize(QSize(20, 20));
        pushButton_hongse->setStyleSheet(QStringLiteral("background-color:#ff0000;"));

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
        pushButton_lvse->setStyleSheet(QStringLiteral("background-color:#7ed321;"));

        gridLayout_3->addWidget(pushButton_lvse, 1, 1, 1, 1);

        pushButton_lanse = new QPushButton(groupBox_3);
        pushButton_lanse->setObjectName(QStringLiteral("pushButton_lanse"));
        pushButton_lanse->setMinimumSize(QSize(20, 20));
        pushButton_lanse->setMaximumSize(QSize(20, 20));
        pushButton_lanse->setStyleSheet(QLatin1String("background-color:#2d8dff;\n"
""));

        gridLayout_3->addWidget(pushButton_lanse, 1, 2, 1, 1);

        pushButton_qingse = new QPushButton(groupBox_3);
        pushButton_qingse->setObjectName(QStringLiteral("pushButton_qingse"));
        pushButton_qingse->setMinimumSize(QSize(20, 20));
        pushButton_qingse->setMaximumSize(QSize(20, 20));
        pushButton_qingse->setStyleSheet(QStringLiteral("background-color:#50e3c2;"));

        gridLayout_3->addWidget(pushButton_qingse, 1, 3, 1, 1);

        pushButton_fense = new QPushButton(groupBox_3);
        pushButton_fense->setObjectName(QStringLiteral("pushButton_fense"));
        pushButton_fense->setMinimumSize(QSize(20, 20));
        pushButton_fense->setMaximumSize(QSize(20, 20));
        pushButton_fense->setStyleSheet(QStringLiteral("background-color:#bd10e0;"));

        gridLayout_3->addWidget(pushButton_fense, 1, 4, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 2, 1, 1);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        huabi_del = new QPushButton(groupBox_4);
        huabi_del->setObjectName(QStringLiteral("huabi_del"));
        huabi_del->setMinimumSize(QSize(50, 50));
        huabi_del->setMaximumSize(QSize(50, 50));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/Images/\345\210\240 \351\231\244.png"), QSize(), QIcon::Normal, QIcon::Off);
        huabi_del->setIcon(icon6);
        huabi_del->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(huabi_del, 0, 1, 1, 1);

        buabi_unm = new QPushButton(groupBox_4);
        buabi_unm->setObjectName(QStringLiteral("buabi_unm"));
        buabi_unm->setMinimumSize(QSize(50, 50));
        buabi_unm->setMaximumSize(QSize(50, 50));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/Images/27\346\222\244\351\224\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        buabi_unm->setIcon(icon7);
        buabi_unm->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(buabi_unm, 0, 0, 1, 1);

        huabi_close = new QPushButton(groupBox_4);
        huabi_close->setObjectName(QStringLiteral("huabi_close"));
        huabi_close->setMinimumSize(QSize(50, 50));
        huabi_close->setMaximumSize(QSize(50, 50));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/Images/Flase.png"), QSize(), QIcon::Normal, QIcon::Off);
        huabi_close->setIcon(icon8);
        huabi_close->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(huabi_close, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        gridLayout->addWidget(widget_huabu, 0, 0, 1, 1);


        retranslateUi(huabi_Form);

        QMetaObject::connectSlotsByName(huabi_Form);
    } // setupUi

    void retranslateUi(QWidget *huabi_Form)
    {
        huabi_Form->setWindowTitle(QApplication::translate("huabi_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("huabi_Form", "\347\224\273\347\254\224\346\251\241\347\232\256", Q_NULLPTR));
        huabi_huabi->setText(QString());
        huabi_era->setText(QString());
        groupBox_2->setTitle(QApplication::translate("huabi_Form", "\347\224\273\347\254\224\347\262\227\347\273\206", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        groupBox_3->setTitle(QApplication::translate("huabi_Form", "\347\224\273\347\254\224\351\242\234\350\211\262", Q_NULLPTR));
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
        groupBox_4->setTitle(QApplication::translate("huabi_Form", "\346\222\244\351\224\200\345\210\240\351\231\244", Q_NULLPTR));
        huabi_del->setText(QString());
        buabi_unm->setText(QString());
        huabi_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class huabi_Form: public Ui_huabi_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUABI_FORM_H
