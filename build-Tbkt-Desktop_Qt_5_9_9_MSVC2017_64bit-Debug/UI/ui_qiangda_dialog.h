/********************************************************************************
** Form generated from reading UI file 'qiangda_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIANGDA_DIALOG_H
#define UI_QIANGDA_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qiangda_Dialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget_1;
    QWidget *page_qiangdakaishi;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_guanbi;
    QWidget *page_wurenqiangda;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton;
    QPushButton *pushButton_guanbi2;
    QWidget *page_qiangdachenggong;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_biaoyang;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_guanbi3;
    QLabel *label;
    QStackedWidget *stackedWidget_cen2;
    QWidget *stackedWidget_cen1;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_first;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QDialog *qiangda_Dialog)
    {
        if (qiangda_Dialog->objectName().isEmpty())
            qiangda_Dialog->setObjectName(QStringLiteral("qiangda_Dialog"));
        qiangda_Dialog->resize(460, 349);
        gridLayout = new QGridLayout(qiangda_Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(qiangda_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame#frame{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        stackedWidget_1 = new QStackedWidget(frame);
        stackedWidget_1->setObjectName(QStringLiteral("stackedWidget_1"));
        stackedWidget_1->setMaximumSize(QSize(16777215, 60));
        stackedWidget_1->setStyleSheet(QString::fromUtf8("QStackedWidget#stackedWidget_1{\n"
"	background-color: rgb(255,255,255);	\n"
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
"    border-color:#297aff;;\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color: #297aff;;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        page_qiangdakaishi = new QWidget();
        page_qiangdakaishi->setObjectName(QStringLiteral("page_qiangdakaishi"));
        gridLayout_3 = new QGridLayout(page_qiangdakaishi);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_guanbi = new QPushButton(page_qiangdakaishi);
        pushButton_guanbi->setObjectName(QStringLiteral("pushButton_guanbi"));
        pushButton_guanbi->setMinimumSize(QSize(140, 45));
        pushButton_guanbi->setMaximumSize(QSize(100, 40));

        gridLayout_3->addWidget(pushButton_guanbi, 0, 0, 1, 1);

        stackedWidget_1->addWidget(page_qiangdakaishi);
        page_wurenqiangda = new QWidget();
        page_wurenqiangda->setObjectName(QStringLiteral("page_wurenqiangda"));
        page_wurenqiangda->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(page_wurenqiangda);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 0, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        pushButton = new QPushButton(page_wurenqiangda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 40));

        gridLayout_5->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_guanbi2 = new QPushButton(page_wurenqiangda);
        pushButton_guanbi2->setObjectName(QStringLiteral("pushButton_guanbi2"));
        pushButton_guanbi2->setMinimumSize(QSize(100, 40));

        gridLayout_5->addWidget(pushButton_guanbi2, 0, 3, 1, 1);

        stackedWidget_1->addWidget(page_wurenqiangda);
        page_qiangdachenggong = new QWidget();
        page_qiangdachenggong->setObjectName(QStringLiteral("page_qiangdachenggong"));
        gridLayout_8 = new QGridLayout(page_qiangdachenggong);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(page_qiangdachenggong);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(125, 45));

        gridLayout_8->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_12, 0, 1, 1, 1);

        pushButton_biaoyang = new QPushButton(page_qiangdachenggong);
        pushButton_biaoyang->setObjectName(QStringLiteral("pushButton_biaoyang"));
        pushButton_biaoyang->setMinimumSize(QSize(125, 45));

        gridLayout_8->addWidget(pushButton_biaoyang, 0, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_13, 0, 3, 1, 1);

        pushButton_guanbi3 = new QPushButton(page_qiangdachenggong);
        pushButton_guanbi3->setObjectName(QStringLiteral("pushButton_guanbi3"));
        pushButton_guanbi3->setMinimumSize(QSize(125, 45));

        gridLayout_8->addWidget(pushButton_guanbi3, 0, 4, 1, 1);

        stackedWidget_1->addWidget(page_qiangdachenggong);

        gridLayout_2->addWidget(stackedWidget_1, 2, 0, 1, 3);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(200, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        stackedWidget_cen2 = new QStackedWidget(frame);
        stackedWidget_cen2->setObjectName(QStringLiteral("stackedWidget_cen2"));
        stackedWidget_cen2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:#297aff;\n"
"   font: 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        stackedWidget_cen1 = new QWidget();
        stackedWidget_cen1->setObjectName(QStringLiteral("stackedWidget_cen1"));
        gridLayout_4 = new QGridLayout(stackedWidget_cen1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_3 = new QLabel(stackedWidget_cen1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(140, 140));
        label_3->setMaximumSize(QSize(160, 160));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        stackedWidget_cen2->addWidget(stackedWidget_cen1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 2, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setStyleSheet(QStringLiteral("color:#297aff;"));

        gridLayout_6->addWidget(label_4, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 4, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 4, 2, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(210, 0));
        label_2->setMaximumSize(QSize(220, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("  font:500 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_6->addWidget(label_2, 3, 1, 1, 1);

        stackedWidget_cen2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_10 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        label_first = new QLabel(page_3);
        label_first->setObjectName(QStringLiteral("label_first"));
        label_first->setMinimumSize(QSize(250, 60));
        label_first->setMaximumSize(QSize(16777215, 60));
        label_first->setStyleSheet(QString::fromUtf8("  font:500 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_first->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_first, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        stackedWidget_cen2->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget_cen2, 1, 0, 1, 3);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(qiangda_Dialog);

        stackedWidget_1->setCurrentIndex(1);
        stackedWidget_cen2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(qiangda_Dialog);
    } // setupUi

    void retranslateUi(QDialog *qiangda_Dialog)
    {
        qiangda_Dialog->setWindowTitle(QApplication::translate("qiangda_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_guanbi->setText(QApplication::translate("qiangda_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qiangda_Dialog", "\345\206\215\346\254\241\346\212\242\347\255\224", Q_NULLPTR));
        pushButton_guanbi2->setText(QApplication::translate("qiangda_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("qiangda_Dialog", "\345\206\215\346\254\241\346\212\242\347\255\224", Q_NULLPTR));
        pushButton_biaoyang->setText(QApplication::translate("qiangda_Dialog", "\350\241\250\346\211\254", Q_NULLPTR));
        pushButton_guanbi3->setText(QApplication::translate("qiangda_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        label->setText(QApplication::translate("qiangda_Dialog", "\342\231\246\342\231\246\342\231\246\345\205\250\345\221\230\346\212\242\347\255\224\342\231\246\342\231\246\342\231\246", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("qiangda_Dialog", "           TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("qiangda_Dialog", "    \345\274\200\345\247\213\346\212\242\347\255\224\357\274\201", Q_NULLPTR));
        label_first->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qiangda_Dialog: public Ui_qiangda_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIANGDA_DIALOG_H
