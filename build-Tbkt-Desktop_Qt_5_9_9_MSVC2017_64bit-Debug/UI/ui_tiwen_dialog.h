/********************************************************************************
** Form generated from reading UI file 'tiwen_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIWEN_DIALOG_H
#define UI_TIWEN_DIALOG_H

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

class Ui_TiWen_Dialog
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget_tiwen;
    QWidget *page_1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_dianming;
    QPushButton *pushButton_close;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_biaoyang;
    QPushButton *pushButton_close_2;
    QPushButton *pushButton_ddianming;

    void setupUi(QDialog *TiWen_Dialog)
    {
        if (TiWen_Dialog->objectName().isEmpty())
            TiWen_Dialog->setObjectName(QStringLiteral("TiWen_Dialog"));
        TiWen_Dialog->resize(419, 300);
        TiWen_Dialog->setMaximumSize(QSize(428, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        TiWen_Dialog->setWindowIcon(icon);
        TiWen_Dialog->setStyleSheet(QString::fromUtf8("/*QWidget{background-color:rgb(255.255.255);}*/\n"
"\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:#297aff;\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#297aff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
"QPushButton::menu-indicator {\n"
"	image:none;\n"
"    subcontrol-position: right center;\n"
"    subcontrol-origin: padding;\n"
"    right: 10px;\n"
"    top: 15px;\n"
"}\n"
"\n"
"QFrame#frame{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout_5 = new QGridLayout(TiWen_Dialog);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, -1, -1, 9);
        frame = new QFrame(TiWen_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(118, 127, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(130, 130));
        label->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(18);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(117, 127, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        stackedWidget_tiwen = new QStackedWidget(frame);
        stackedWidget_tiwen->setObjectName(QStringLiteral("stackedWidget_tiwen"));
        stackedWidget_tiwen->setMaximumSize(QSize(16777215, 80));
        stackedWidget_tiwen->setStyleSheet(QStringLiteral(""));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        gridLayout_2 = new QGridLayout(page_1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_dianming = new QPushButton(page_1);
        pushButton_dianming->setObjectName(QStringLiteral("pushButton_dianming"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_dianming->sizePolicy().hasHeightForWidth());
        pushButton_dianming->setSizePolicy(sizePolicy);
        pushButton_dianming->setMinimumSize(QSize(120, 45));
        pushButton_dianming->setMaximumSize(QSize(90, 50));

        gridLayout_2->addWidget(pushButton_dianming, 0, 0, 1, 1);

        pushButton_close = new QPushButton(page_1);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);
        pushButton_close->setMinimumSize(QSize(120, 45));
        pushButton_close->setMaximumSize(QSize(90, 50));

        gridLayout_2->addWidget(pushButton_close, 0, 1, 1, 1);

        stackedWidget_tiwen->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_biaoyang = new QPushButton(page_2);
        pushButton_biaoyang->setObjectName(QStringLiteral("pushButton_biaoyang"));
        sizePolicy.setHeightForWidth(pushButton_biaoyang->sizePolicy().hasHeightForWidth());
        pushButton_biaoyang->setSizePolicy(sizePolicy);
        pushButton_biaoyang->setMinimumSize(QSize(120, 45));
        pushButton_biaoyang->setMaximumSize(QSize(90, 50));

        gridLayout_3->addWidget(pushButton_biaoyang, 0, 1, 1, 1);

        pushButton_close_2 = new QPushButton(page_2);
        pushButton_close_2->setObjectName(QStringLiteral("pushButton_close_2"));
        sizePolicy.setHeightForWidth(pushButton_close_2->sizePolicy().hasHeightForWidth());
        pushButton_close_2->setSizePolicy(sizePolicy);
        pushButton_close_2->setMinimumSize(QSize(120, 45));
        pushButton_close_2->setMaximumSize(QSize(90, 50));

        gridLayout_3->addWidget(pushButton_close_2, 0, 2, 1, 1);

        pushButton_ddianming = new QPushButton(page_2);
        pushButton_ddianming->setObjectName(QStringLiteral("pushButton_ddianming"));
        sizePolicy.setHeightForWidth(pushButton_ddianming->sizePolicy().hasHeightForWidth());
        pushButton_ddianming->setSizePolicy(sizePolicy);
        pushButton_ddianming->setMinimumSize(QSize(120, 45));
        pushButton_ddianming->setMaximumSize(QSize(90, 50));

        gridLayout_3->addWidget(pushButton_ddianming, 0, 0, 1, 1);

        stackedWidget_tiwen->addWidget(page_2);

        gridLayout->addWidget(stackedWidget_tiwen, 1, 0, 1, 1);


        gridLayout_5->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(TiWen_Dialog);

        stackedWidget_tiwen->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TiWen_Dialog);
    } // setupUi

    void retranslateUi(QDialog *TiWen_Dialog)
    {
        TiWen_Dialog->setWindowTitle(QApplication::translate("TiWen_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label_2->setText(QApplication::translate("TiWen_Dialog", "\342\231\246\342\231\246\342\231\246\351\232\217\346\234\272\346\217\220\351\227\256\342\231\246\342\231\246\342\231\246", Q_NULLPTR));
        label->setText(QString());
        pushButton_dianming->setText(QApplication::translate("TiWen_Dialog", "\345\274\200\345\247\213\347\202\271\345\220\215", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("TiWen_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_biaoyang->setText(QApplication::translate("TiWen_Dialog", "\350\241\250\346\211\254", Q_NULLPTR));
        pushButton_close_2->setText(QApplication::translate("TiWen_Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_ddianming->setText(QApplication::translate("TiWen_Dialog", "\345\274\200\345\247\213\347\202\271\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TiWen_Dialog: public Ui_TiWen_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIWEN_DIALOG_H
