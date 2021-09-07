/********************************************************************************
** Form generated from reading UI file 'daojishi_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAOJISHI_DIALOG_H
#define UI_DAOJISHI_DIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_daojishi_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_tmp;
    QLabel *label_tm;
    QPushButton *pushButton_tmj;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_mp;
    QLabel *label_m;
    QPushButton *pushButton_mj;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_tsp;
    QLabel *label_ts;
    QPushButton *pushButton_tsj;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_sp;
    QLabel *label_s;
    QPushButton *pushButton_sj;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pushButton_quxiao;
    QSpacerItem *horizontalSpacer_16;

    void setupUi(QDialog *daojishi_Dialog)
    {
        if (daojishi_Dialog->objectName().isEmpty())
            daojishi_Dialog->setObjectName(QStringLiteral("daojishi_Dialog"));
        daojishi_Dialog->resize(500, 340);
        daojishi_Dialog->setMinimumSize(QSize(500, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        daojishi_Dialog->setWindowIcon(icon);
        daojishi_Dialog->setStyleSheet(QString::fromUtf8("\n"
"QLabel\n"
"{\n"
"    border-style: solid;\n"
"	color:#5396ff;\n"
"	font: 75 60pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border-width: 1px;\n"
"    border-color:#cccccc;\n"
"}\n"
"QFrame#frame{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-radius: 20px;\n"
"\n"
"    background-color: transparent;\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(daojishi_Dialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame = new QFrame(daojishi_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_tmp = new QPushButton(frame);
        pushButton_tmp->setObjectName(QStringLiteral("pushButton_tmp"));
        pushButton_tmp->setMinimumSize(QSize(72, 50));
        pushButton_tmp->setMaximumSize(QSize(72, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tmp->setIcon(icon1);
        pushButton_tmp->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(pushButton_tmp);

        label_tm = new QLabel(frame);
        label_tm->setObjectName(QStringLiteral("label_tm"));
        label_tm->setMinimumSize(QSize(72, 108));
        label_tm->setMaximumSize(QSize(72, 108));

        verticalLayout->addWidget(label_tm);

        pushButton_tmj = new QPushButton(frame);
        pushButton_tmj->setObjectName(QStringLiteral("pushButton_tmj"));
        pushButton_tmj->setMinimumSize(QSize(72, 50));
        pushButton_tmj->setMaximumSize(QSize(72, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_tmj->setIcon(icon2);
        pushButton_tmj->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(pushButton_tmj);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_mp = new QPushButton(frame);
        pushButton_mp->setObjectName(QStringLiteral("pushButton_mp"));
        pushButton_mp->setMinimumSize(QSize(72, 50));
        pushButton_mp->setMaximumSize(QSize(72, 50));
        pushButton_mp->setIcon(icon1);
        pushButton_mp->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_mp);

        label_m = new QLabel(frame);
        label_m->setObjectName(QStringLiteral("label_m"));
        label_m->setMinimumSize(QSize(72, 108));
        label_m->setMaximumSize(QSize(72, 108));

        verticalLayout_2->addWidget(label_m);

        pushButton_mj = new QPushButton(frame);
        pushButton_mj->setObjectName(QStringLiteral("pushButton_mj"));
        pushButton_mj->setMinimumSize(QSize(72, 50));
        pushButton_mj->setMaximumSize(QSize(72, 50));
        pushButton_mj->setIcon(icon2);
        pushButton_mj->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_mj);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(42, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_tsp = new QPushButton(frame);
        pushButton_tsp->setObjectName(QStringLiteral("pushButton_tsp"));
        pushButton_tsp->setMinimumSize(QSize(72, 50));
        pushButton_tsp->setMaximumSize(QSize(72, 50));
        pushButton_tsp->setIcon(icon1);
        pushButton_tsp->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(pushButton_tsp);

        label_ts = new QLabel(frame);
        label_ts->setObjectName(QStringLiteral("label_ts"));
        label_ts->setMinimumSize(QSize(72, 108));
        label_ts->setMaximumSize(QSize(72, 108));

        verticalLayout_3->addWidget(label_ts);

        pushButton_tsj = new QPushButton(frame);
        pushButton_tsj->setObjectName(QStringLiteral("pushButton_tsj"));
        pushButton_tsj->setMinimumSize(QSize(72, 50));
        pushButton_tsj->setMaximumSize(QSize(72, 50));
        pushButton_tsj->setIcon(icon2);
        pushButton_tsj->setIconSize(QSize(28, 28));

        verticalLayout_3->addWidget(pushButton_tsj);


        gridLayout_2->addLayout(verticalLayout_3, 0, 3, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_sp = new QPushButton(frame);
        pushButton_sp->setObjectName(QStringLiteral("pushButton_sp"));
        pushButton_sp->setMinimumSize(QSize(72, 50));
        pushButton_sp->setMaximumSize(QSize(72, 50));
        pushButton_sp->setIcon(icon1);
        pushButton_sp->setIconSize(QSize(28, 28));

        verticalLayout_4->addWidget(pushButton_sp);

        label_s = new QLabel(frame);
        label_s->setObjectName(QStringLiteral("label_s"));
        label_s->setMinimumSize(QSize(72, 108));
        label_s->setMaximumSize(QSize(72, 108));

        verticalLayout_4->addWidget(label_s);

        pushButton_sj = new QPushButton(frame);
        pushButton_sj->setObjectName(QStringLiteral("pushButton_sj"));
        pushButton_sj->setMinimumSize(QSize(72, 50));
        pushButton_sj->setMaximumSize(QSize(72, 50));
        pushButton_sj->setIcon(icon2);
        pushButton_sj->setIconSize(QSize(28, 28));

        verticalLayout_4->addWidget(pushButton_sj);


        gridLayout_2->addLayout(verticalLayout_4, 0, 4, 1, 1);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(350, 80));
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
"    border-width: 2px;\n"
"    border-color: #297aff;\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#297aff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_15 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        pushButton_start = new QPushButton(widget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(120, 50));
        pushButton_start->setMaximumSize(QSize(100, 40));

        gridLayout->addWidget(pushButton_start, 0, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 0, 2, 1, 1);

        pushButton_quxiao = new QPushButton(widget);
        pushButton_quxiao->setObjectName(QStringLiteral("pushButton_quxiao"));
        pushButton_quxiao->setMinimumSize(QSize(120, 50));
        pushButton_quxiao->setMaximumSize(QSize(100, 40));

        gridLayout->addWidget(pushButton_quxiao, 0, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 0, 4, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 5);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(daojishi_Dialog);

        QMetaObject::connectSlotsByName(daojishi_Dialog);
    } // setupUi

    void retranslateUi(QDialog *daojishi_Dialog)
    {
        daojishi_Dialog->setWindowTitle(QApplication::translate("daojishi_Dialog", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_tmp->setText(QString());
        label_tm->setText(QApplication::translate("daojishi_Dialog", "TextLabel", Q_NULLPTR));
        pushButton_tmj->setText(QString());
        pushButton_mp->setText(QString());
        label_m->setText(QApplication::translate("daojishi_Dialog", "TextLabel", Q_NULLPTR));
        pushButton_mj->setText(QString());
        pushButton_tsp->setText(QString());
        label_ts->setText(QApplication::translate("daojishi_Dialog", "TextLabel", Q_NULLPTR));
        pushButton_tsj->setText(QString());
        pushButton_sp->setText(QString());
        label_s->setText(QApplication::translate("daojishi_Dialog", "TextLabel", Q_NULLPTR));
        pushButton_sj->setText(QString());
        pushButton_start->setText(QApplication::translate("daojishi_Dialog", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_quxiao->setText(QApplication::translate("daojishi_Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class daojishi_Dialog: public Ui_daojishi_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAOJISHI_DIALOG_H
