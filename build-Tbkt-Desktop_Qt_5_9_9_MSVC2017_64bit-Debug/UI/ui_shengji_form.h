/********************************************************************************
** Form generated from reading UI file 'shengji_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHENGJI_FORM_H
#define UI_SHENGJI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shengji_Form
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *Page1;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_11;
    QWidget *page_jindu;
    QPushButton *pushButton_sdhengjizanting;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_wancheng;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *shengji_Form)
    {
        if (shengji_Form->objectName().isEmpty())
            shengji_Form->setObjectName(QStringLiteral("shengji_Form"));
        shengji_Form->resize(458, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        shengji_Form->setWindowIcon(icon);
        shengji_Form->setStyleSheet(QString::fromUtf8("QWidget#Page1,#page_jindu,#page_wancheng{\n"
"	background-color: rgb(255,255,255);\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(255,255,255); \n"
"    border-radius: 30px;\n"
"}\n"
"QLabel#label,#label_2{\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton {\n"
"font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	color: rgb(255, 255, 255);\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(200, 200, 200); \n"
"    border-radius: 10px;\n"
"\n"
"    background-color:rgb(200, 200, 200);\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color:rgba(200,200,200,1);\n"
"    background-color:rgba(200,200,200,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"	border-color: blueviolet;\n"
"    background-color: black;\n"
"}\n"
"QProgressBar{\n"
"        border: none;\n"
"        color: white;\n"
"  "
                        "      text-align: center;\n"
"        background: rgb(68, 69, 73);\n"
"}\n"
"QProgressBar::chunk {\n"
"        border: none;\n"
"        background: rgb(0, 160, 230);\n"
"}"));
        gridLayout = new QGridLayout(shengji_Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(shengji_Form);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        Page1 = new QWidget();
        Page1->setObjectName(QStringLiteral("Page1"));
        gridLayout_4 = new QGridLayout(Page1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 2, 1, 1);

        label = new QLabel(Page1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 5);

        verticalSpacer = new QSpacerItem(20, 79, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        pushButton = new QPushButton(Page1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(pushButton, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(Page1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 40));
        pushButton_2->setMaximumSize(QSize(100, 30));

        gridLayout_4->addWidget(pushButton_2, 3, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 3, 4, 1, 1);

        stackedWidget->addWidget(Page1);
        page_jindu = new QWidget();
        page_jindu->setObjectName(QStringLiteral("page_jindu"));
        pushButton_sdhengjizanting = new QPushButton(page_jindu);
        pushButton_sdhengjizanting->setObjectName(QStringLiteral("pushButton_sdhengjizanting"));
        pushButton_sdhengjizanting->setGeometry(QRect(170, 220, 100, 40));
        widget = new QWidget(page_jindu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 100, 272, 75));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(250, 30));
        progressBar->setMaximumSize(QSize(200, 30));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        stackedWidget->addWidget(page_jindu);
        page_wancheng = new QWidget();
        page_wancheng->setObjectName(QStringLiteral("page_wancheng"));
        gridLayout_3 = new QGridLayout(page_wancheng);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        label_2 = new QLabel(page_wancheng);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(page_wancheng);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 40));
        pushButton_4->setMaximumSize(QSize(100, 40));

        gridLayout_3->addWidget(pushButton_4, 1, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 4, 1, 1);

        stackedWidget->addWidget(page_wancheng);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);


        retranslateUi(shengji_Form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(shengji_Form);
    } // setupUi

    void retranslateUi(QWidget *shengji_Form)
    {
        shengji_Form->setWindowTitle(QApplication::translate("shengji_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label->setText(QApplication::translate("shengji_Form", "\346\243\200\346\265\213\345\210\260\350\275\257\344\273\266\346\234\211\346\226\260\347\232\204\347\211\210\346\234\254\357\274\214\346\230\257\345\220\246\347\216\260\345\234\250\346\233\264\346\226\260\357\274\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("shengji_Form", "\346\230\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("shengji_Form", "\345\220\246", Q_NULLPTR));
        pushButton_sdhengjizanting->setText(QApplication::translate("shengji_Form", "\345\217\226\346\266\210\345\215\207\347\272\247", Q_NULLPTR));
        label_3->setText(QApplication::translate("shengji_Form", "\346\255\243\345\234\250\346\233\264\346\226\260\357\274\214\350\257\267\347\250\215\345\220\216\342\200\246\342\200\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("shengji_Form", "\346\201\255\345\226\234\357\274\201\346\202\250\347\232\204\350\275\257\344\273\266\345\267\262\346\230\257\346\234\200\346\226\260\347\211\210\346\234\254\357\274\201", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("shengji_Form", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shengji_Form: public Ui_shengji_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHENGJI_FORM_H
