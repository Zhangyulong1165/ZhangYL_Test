/********************************************************************************
** Form generated from reading UI file 'set_ansform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_ANSFORM_H
#define UI_SET_ANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_ansForm
{
public:
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxA;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxC;
    QCheckBox *checkBoxD;
    QCheckBox *checkBoxE;
    QCheckBox *checkBoxF;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_close;
    QLabel *label;

    void setupUi(QWidget *set_ansForm)
    {
        if (set_ansForm->objectName().isEmpty())
            set_ansForm->setObjectName(QStringLiteral("set_ansForm"));
        set_ansForm->resize(396, 617);
        set_ansForm->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"	background-color:rgb(14 , 150 , 254);\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:rgb(14 , 150 , 254);\n"
"    border-radius: 20px;\n"
"}\n"
"QLabel\n"
"{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"}\n"
"QWidget#widget\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        frame = new QFrame(set_ansForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(9, 9, 380, 607));
        frame->setMinimumSize(QSize(380, 500));
        frame->setMaximumSize(QSize(380, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 60, 380, 550));
        widget->setMinimumSize(QSize(380, 550));
        widget->setMaximumSize(QSize(375, 550));
        widget->setStyleSheet(QLatin1String("QCheckBox\n"
"{\n"
"	spacing: 5px;\n"
"	font: 500 14pt \"Microsoft JhengHei UI\";\n"
"}\n"
"QCheckBox::indicator {\n"
"        width:30px;\n"
"        height: 30px;\n"
"        image: url(:/new/prefix1/Images/chk_no.png);\n"
"}\n"
"QCheckBox::indicator:enabled:checked {\n"
"        image: url(:/new/prefix1/Images/chk_yes.png);\n"
"}\n"
"QCheckBox::indicator:enabled:unchecked:pressed {\n"
"\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxA = new QCheckBox(widget);
        checkBoxA->setObjectName(QStringLiteral("checkBoxA"));
        checkBoxA->setMinimumSize(QSize(0, 50));
        checkBoxA->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxA);

        checkBoxB = new QCheckBox(widget);
        checkBoxB->setObjectName(QStringLiteral("checkBoxB"));
        checkBoxB->setMinimumSize(QSize(0, 50));
        checkBoxB->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxB);

        checkBoxC = new QCheckBox(widget);
        checkBoxC->setObjectName(QStringLiteral("checkBoxC"));
        checkBoxC->setMinimumSize(QSize(0, 50));
        checkBoxC->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxC);

        checkBoxD = new QCheckBox(widget);
        checkBoxD->setObjectName(QStringLiteral("checkBoxD"));
        checkBoxD->setMinimumSize(QSize(0, 50));
        checkBoxD->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxD);

        checkBoxE = new QCheckBox(widget);
        checkBoxE->setObjectName(QStringLiteral("checkBoxE"));
        checkBoxE->setMinimumSize(QSize(0, 50));
        checkBoxE->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxE);

        checkBoxF = new QCheckBox(widget);
        checkBoxF->setObjectName(QStringLiteral("checkBoxF"));
        checkBoxF->setMinimumSize(QSize(0, 50));
        checkBoxF->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(checkBoxF);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(132, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 59, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{	\n"
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
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(140, 45));
        pushButton->setMaximumSize(QSize(140, 45));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(129, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_close = new QPushButton(widget_2);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(140, 45));
        pushButton_close->setMaximumSize(QSize(100, 40));

        gridLayout_2->addWidget(pushButton_close, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 3, 0, 1, 3);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 147, 29));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);

        retranslateUi(set_ansForm);

        QMetaObject::connectSlotsByName(set_ansForm);
    } // setupUi

    void retranslateUi(QWidget *set_ansForm)
    {
        set_ansForm->setWindowTitle(QApplication::translate("set_ansForm", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        checkBoxA->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271A", Q_NULLPTR));
        checkBoxB->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271B", Q_NULLPTR));
        checkBoxC->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271C", Q_NULLPTR));
        checkBoxD->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271D", Q_NULLPTR));
        checkBoxE->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271E", Q_NULLPTR));
        checkBoxF->setText(QApplication::translate("set_ansForm", "\351\200\211\351\241\271F", Q_NULLPTR));
        pushButton->setText(QApplication::translate("set_ansForm", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("set_ansForm", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("set_ansForm", "\350\257\267\350\256\276\345\256\232\346\255\243\347\241\256\347\255\224\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class set_ansForm: public Ui_set_ansForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_ANSFORM_H
