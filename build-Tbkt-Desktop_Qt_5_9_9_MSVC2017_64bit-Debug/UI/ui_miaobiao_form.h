/********************************************************************************
** Form generated from reading UI file 'miaobiao_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIAOBIAO_FORM_H
#define UI_MIAOBIAO_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_miaobiao_Form
{
public:
    QGridLayout *gridLayout_6;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_h;
    QLabel *label_5;
    QLabel *label_m;
    QLabel *label_4;
    QLabel *label_s;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_kaishi;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_quxiao;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_jixu;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_chongxinkaishi;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *miaobiao_Form)
    {
        if (miaobiao_Form->objectName().isEmpty())
            miaobiao_Form->setObjectName(QStringLiteral("miaobiao_Form"));
        miaobiao_Form->resize(398, 374);
        miaobiao_Form->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(20, 150, 255);;\n"
"	font: 75 50pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QFrame#frame{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        gridLayout_6 = new QGridLayout(miaobiao_Form);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        frame = new QFrame(miaobiao_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 0, 2, 1, 1);

        label_h = new QLabel(frame);
        label_h->setObjectName(QStringLiteral("label_h"));
        label_h->setMinimumSize(QSize(100, 100));
        label_h->setMaximumSize(QSize(100, 100));
        label_h->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(label_h, 1, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(50);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_5->setFont(font);

        gridLayout_5->addWidget(label_5, 1, 1, 1, 1);

        label_m = new QLabel(frame);
        label_m->setObjectName(QStringLiteral("label_m"));
        label_m->setMinimumSize(QSize(100, 100));
        label_m->setMaximumSize(QSize(100, 100));
        label_m->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(label_m, 1, 2, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 1, 3, 1, 1);

        label_s = new QLabel(frame);
        label_s->setObjectName(QStringLiteral("label_s"));
        label_s->setMinimumSize(QSize(100, 100));
        label_s->setMaximumSize(QSize(100, 100));
        label_s->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(label_s, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer, 2, 2, 1, 1);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(350, 60));
        stackedWidget->setMaximumSize(QSize(16777215, 60));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget{\n"
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
"    border-color:#297aff;\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color:#297aff;	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
"}\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_kaishi = new QPushButton(page);
        pushButton_kaishi->setObjectName(QStringLiteral("pushButton_kaishi"));
        pushButton_kaishi->setMinimumSize(QSize(140, 45));
        pushButton_kaishi->setMaximumSize(QSize(60, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_kaishi->setFont(font1);

        gridLayout_3->addWidget(pushButton_kaishi, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(55, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton_quxiao = new QPushButton(page);
        pushButton_quxiao->setObjectName(QStringLiteral("pushButton_quxiao"));
        pushButton_quxiao->setMinimumSize(QSize(140, 45));
        pushButton_quxiao->setMaximumSize(QSize(140, 40));
        pushButton_quxiao->setFont(font1);

        gridLayout_3->addWidget(pushButton_quxiao, 0, 3, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_jixu = new QPushButton(page_2);
        pushButton_jixu->setObjectName(QStringLiteral("pushButton_jixu"));
        pushButton_jixu->setMinimumSize(QSize(120, 45));
        pushButton_jixu->setMaximumSize(QSize(60, 40));
        pushButton_jixu->setFont(font1);

        gridLayout->addWidget(pushButton_jixu, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        pushButton_chongxinkaishi = new QPushButton(page_2);
        pushButton_chongxinkaishi->setObjectName(QStringLiteral("pushButton_chongxinkaishi"));
        pushButton_chongxinkaishi->setMinimumSize(QSize(120, 45));
        pushButton_chongxinkaishi->setMaximumSize(QSize(100, 40));
        pushButton_chongxinkaishi->setFont(font1);

        gridLayout->addWidget(pushButton_chongxinkaishi, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_5->addWidget(stackedWidget, 3, 0, 1, 5);


        gridLayout_6->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(miaobiao_Form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(miaobiao_Form);
    } // setupUi

    void retranslateUi(QWidget *miaobiao_Form)
    {
        miaobiao_Form->setWindowTitle(QApplication::translate("miaobiao_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label_h->setText(QApplication::translate("miaobiao_Form", "00", Q_NULLPTR));
        label_5->setText(QApplication::translate("miaobiao_Form", ":", Q_NULLPTR));
        label_m->setText(QApplication::translate("miaobiao_Form", "00", Q_NULLPTR));
        label_4->setText(QApplication::translate("miaobiao_Form", ":", Q_NULLPTR));
        label_s->setText(QApplication::translate("miaobiao_Form", "00", Q_NULLPTR));
        pushButton_kaishi->setText(QApplication::translate("miaobiao_Form", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_quxiao->setText(QApplication::translate("miaobiao_Form", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_jixu->setText(QApplication::translate("miaobiao_Form", "\346\232\202\345\201\234", Q_NULLPTR));
        pushButton_chongxinkaishi->setText(QApplication::translate("miaobiao_Form", "\351\207\215\346\226\260\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class miaobiao_Form: public Ui_miaobiao_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIAOBIAO_FORM_H
