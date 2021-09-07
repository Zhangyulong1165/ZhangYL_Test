/********************************************************************************
** Form generated from reading UI file 'fankui_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANKUI_FORM_H
#define UI_FANKUI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fankui_Form
{
public:
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_f1;
    QLabel *label_6;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_f2;
    QLabel *label_7;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_f3;
    QLabel *label_8;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_f4;
    QLabel *label_9;
    QLabel *label_13;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *fankui_Form)
    {
        if (fankui_Form->objectName().isEmpty())
            fankui_Form->setObjectName(QStringLiteral("fankui_Form"));
        fankui_Form->resize(650, 420);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        fankui_Form->setWindowIcon(icon);
        fankui_Form->setStyleSheet(QString::fromUtf8("QFrame#frame\n"
"{\n"
"	background-color: rgb(70, 140, 255);\n"
"	border-radius:10px;\n"
"}\n"
"QLabel#label\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	font: 555 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QLabel#label_6,#label_7,#label_8,#label_9\n"
"{\n"
"	color: rgb(14,14,11);\n"
"	\n"
"	font: 455 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QLabel#label_10,#label_11,#label_12,#label_13\n"
"{\n"
"	color: rgb(255, 170, 0);\n"
"	\n"
"	font: 455 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"#QWidget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-radius: 20px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	color: red;\n"
"	border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"QPushButton:pressed{\n"
"	color: green;\n"
"	border-color: blueviolet;\n"
"    background-color: black;\n"
"}"));
        frame = new QFrame(fankui_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 650, 420));
        frame->setMinimumSize(QSize(600, 400));
        frame->setMaximumSize(QSize(650, 420));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 50, 650, 370));
        widget->setMinimumSize(QSize(650, 370));
        widget->setMaximumSize(QSize(650, 370));
        widget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
" border-top-left-radius:0px;\n"
" border-bottom-left-radius:10px;\n"
" border-top-right-radius:0px;\n"
" border-bottom-right-radius:10px;"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 69, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(11, -1, 11, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, -1, 20, -1);
        pushButton_f1 = new QPushButton(widget);
        pushButton_f1->setObjectName(QStringLiteral("pushButton_f1"));
        pushButton_f1->setMinimumSize(QSize(100, 100));
        pushButton_f1->setMaximumSize(QSize(100, 100));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_f1->setIcon(icon1);
        pushButton_f1->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushButton_f1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(120, 30));
        label_6->setMaximumSize(QSize(120, 30));

        verticalLayout->addWidget(label_6);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(100, 30));
        label_10->setMaximumSize(QSize(100, 30));
        label_10->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/f.png);"));

        verticalLayout->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, -1, 20, -1);
        pushButton_f2 = new QPushButton(widget);
        pushButton_f2->setObjectName(QStringLiteral("pushButton_f2"));
        pushButton_f2->setMinimumSize(QSize(100, 100));
        pushButton_f2->setMaximumSize(QSize(100, 100));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_f2->setIcon(icon2);
        pushButton_f2->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(pushButton_f2);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(120, 30));
        label_7->setMaximumSize(QSize(100, 30));

        verticalLayout_2->addWidget(label_7);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 30));
        label_11->setMaximumSize(QSize(100, 30));
        label_11->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/f.png);"));

        verticalLayout_2->addWidget(label_11);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, -1, 20, -1);
        pushButton_f3 = new QPushButton(widget);
        pushButton_f3->setObjectName(QStringLiteral("pushButton_f3"));
        pushButton_f3->setMinimumSize(QSize(100, 100));
        pushButton_f3->setMaximumSize(QSize(100, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_f3->setIcon(icon3);
        pushButton_f3->setIconSize(QSize(100, 100));

        verticalLayout_3->addWidget(pushButton_f3);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(120, 30));
        label_8->setMaximumSize(QSize(100, 30));

        verticalLayout_3->addWidget(label_8);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(100, 30));
        label_12->setMaximumSize(QSize(100, 30));
        label_12->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/f.png);"));

        verticalLayout_3->addWidget(label_12);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, -1, 20, -1);
        pushButton_f4 = new QPushButton(widget);
        pushButton_f4->setObjectName(QStringLiteral("pushButton_f4"));
        pushButton_f4->setMinimumSize(QSize(100, 100));
        pushButton_f4->setMaximumSize(QSize(100, 100));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_f4->setIcon(icon4);
        pushButton_f4->setIconSize(QSize(100, 100));

        verticalLayout_4->addWidget(pushButton_f4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(120, 30));
        label_9->setMaximumSize(QSize(100, 30));

        verticalLayout_4->addWidget(label_9);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(100, 30));
        label_13->setMaximumSize(QSize(100, 30));
        label_13->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/Images/f.png);"));

        verticalLayout_4->addWidget(label_13);


        horizontalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 69, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(2, 10, 591, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 10, 38, 34));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Images/ccc.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(30, 30));

        retranslateUi(fankui_Form);

        QMetaObject::connectSlotsByName(fankui_Form);
    } // setupUi

    void retranslateUi(QWidget *fankui_Form)
    {
        fankui_Form->setWindowTitle(QApplication::translate("fankui_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_f1->setText(QString());
        label_6->setText(QApplication::translate("fankui_Form", "\345\217\221\350\250\200\347\247\257\346\236\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("fankui_Form", "         +1", Q_NULLPTR));
        pushButton_f2->setText(QString());
        label_7->setText(QApplication::translate("fankui_Form", "\344\275\234\344\270\232\344\274\230\347\247\200", Q_NULLPTR));
        label_11->setText(QApplication::translate("fankui_Form", "         +2", Q_NULLPTR));
        pushButton_f3->setText(QString());
        label_8->setText(QApplication::translate("fankui_Form", "\347\247\257\346\236\201\346\200\235\350\200\203", Q_NULLPTR));
        label_12->setText(QApplication::translate("fankui_Form", "          +2", Q_NULLPTR));
        pushButton_f4->setText(QString());
        label_9->setText(QApplication::translate("fankui_Form", "\345\233\242\351\230\237\345\215\217\344\275\234", Q_NULLPTR));
        label_13->setText(QApplication::translate("fankui_Form", "         +1", Q_NULLPTR));
        label->setText(QApplication::translate("fankui_Form", "\345\217\221\351\200\201\345\217\215\351\246\210\347\273\231                                                                                   ", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fankui_Form: public Ui_fankui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANKUI_FORM_H
