/********************************************************************************
** Form generated from reading UI file 'jushou_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUSHOU_DIALOG_H
#define UI_JUSHOU_DIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jushou_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *callAgainButton;
    QPushButton *praiseButton;
    QPushButton *pushButton_3;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page2;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidget;

    void setupUi(QDialog *jushou_Dialog)
    {
        if (jushou_Dialog->objectName().isEmpty())
            jushou_Dialog->setObjectName(QStringLiteral("jushou_Dialog"));
        jushou_Dialog->resize(500, 372);
        jushou_Dialog->setMinimumSize(QSize(500, 370));
        jushou_Dialog->setMaximumSize(QSize(500, 372));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        jushou_Dialog->setWindowIcon(icon);
        gridLayout_4 = new QGridLayout(jushou_Dialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame = new QFrame(jushou_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(200, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:#297aff;"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 70));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border-style: solid;\n"
"	border-top-color: rgb(200,200, 200);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#297aff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        callAgainButton = new QPushButton(widget);
        callAgainButton->setObjectName(QStringLiteral("callAgainButton"));
        callAgainButton->setMinimumSize(QSize(100, 48));
        callAgainButton->setMaximumSize(QSize(140, 48));

        gridLayout_3->addWidget(callAgainButton, 0, 0, 1, 1);

        praiseButton = new QPushButton(widget);
        praiseButton->setObjectName(QStringLiteral("praiseButton"));
        praiseButton->setMinimumSize(QSize(100, 48));
        praiseButton->setMaximumSize(QSize(140, 48));

        gridLayout_3->addWidget(praiseButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(140, 48));
        pushButton_3->setMaximumSize(QSize(140, 48));

        gridLayout_3->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 3, 0, 1, 3);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        gridLayout_2 = new QGridLayout(page1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_3 = new QLabel(page1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(160, 160));
        label_3->setMaximumSize(QSize(160, 160));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        gridLayout_5 = new QGridLayout(page2);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(page2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        tableWidget->setFont(font2);
        tableWidget->setStyleSheet(QLatin1String("QTableWidget::item:selected {\n"
"		border-radius:5px;\n"
"        color: rgb(255,255, 255);   \n"
"		background-color: rgb(35, 175,105);     \n"
"}\n"
"\n"
""));
        tableWidget->setShowGrid(false);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);

        gridLayout_5->addWidget(tableWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page2);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 3);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(jushou_Dialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(jushou_Dialog);
    } // setupUi

    void retranslateUi(QDialog *jushou_Dialog)
    {
        jushou_Dialog->setWindowTitle(QApplication::translate("jushou_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label->setText(QApplication::translate("jushou_Dialog", "   \342\231\246\342\231\246 \344\270\276\346\211\213\347\202\271\345\220\215 \342\231\246\342\231\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("jushou_Dialog", "\350\257\267\346\214\211\344\270\276\346\211\213\351\224\256\350\277\233\350\241\214\344\270\276\346\211\213\347\202\271\345\220\215", Q_NULLPTR));
        callAgainButton->setText(QApplication::translate("jushou_Dialog", "\345\206\215\346\254\241\347\202\271\345\220\215", Q_NULLPTR));
        praiseButton->setText(QApplication::translate("jushou_Dialog", "\350\241\250\346\211\254", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("jushou_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class jushou_Dialog: public Ui_jushou_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUSHOU_DIALOG_H
