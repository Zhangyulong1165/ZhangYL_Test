/********************************************************************************
** Form generated from reading UI file 'fankuijieguo_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANKUIJIEGUO_FORM_H
#define UI_FANKUIJIEGUO_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FanKuiJieGuo_Form
{
public:
    QFrame *frame;
    QPushButton *pushButton_stuimange;
    QLabel *label_f;
    QLabel *label_stuname;
    QWidget *widget;
    QPushButton *pushButton_type;
    QLabel *label_f_type;

    void setupUi(QWidget *FanKuiJieGuo_Form)
    {
        if (FanKuiJieGuo_Form->objectName().isEmpty())
            FanKuiJieGuo_Form->setObjectName(QStringLiteral("FanKuiJieGuo_Form"));
        FanKuiJieGuo_Form->resize(503, 508);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        FanKuiJieGuo_Form->setWindowIcon(icon);
        FanKuiJieGuo_Form->setStyleSheet(QLatin1String("QFrame#frame\n"
"{\n"
"	background-color: rgb(70, 140, 255);\n"
"	border-radius:10px;\n"
"}"));
        frame = new QFrame(FanKuiJieGuo_Form);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 40, 400, 450));
        frame->setMinimumSize(QSize(400, 450));
        frame->setMaximumSize(QSize(400, 450));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_stuimange = new QPushButton(frame);
        pushButton_stuimange->setObjectName(QStringLiteral("pushButton_stuimange"));
        pushButton_stuimange->setGeometry(QRect(120, 10, 150, 150));
        pushButton_stuimange->setMinimumSize(QSize(150, 150));
        pushButton_stuimange->setMaximumSize(QSize(120, 120));
        label_f = new QLabel(frame);
        label_f->setObjectName(QStringLiteral("label_f"));
        label_f->setGeometry(QRect(200, 100, 60, 50));
        label_f->setMinimumSize(QSize(60, 45));
        label_f->setMaximumSize(QSize(60, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_f->setFont(font);
        label_f->setStyleSheet(QLatin1String("image: url(:/new/prefix1/Images/f.png);\n"
"color: rgb(255, 170, 0);	"));
        label_f->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_stuname = new QLabel(frame);
        label_stuname->setObjectName(QStringLiteral("label_stuname"));
        label_stuname->setGeometry(QRect(59, 170, 291, 40));
        label_stuname->setMinimumSize(QSize(100, 40));
        label_stuname->setMaximumSize(QSize(16777215, 40));
        label_stuname->setStyleSheet(QString::fromUtf8("\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"	font: 500 17pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        label_stuname->setAlignment(Qt::AlignCenter);
        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 220, 401, 231));
        widget->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
" border-top-left-radius:0px;\n"
" border-bottom-left-radius:10px;\n"
" border-top-right-radius:0px;\n"
" border-bottom-right-radius:10px;\n"
""));
        pushButton_type = new QPushButton(widget);
        pushButton_type->setObjectName(QStringLiteral("pushButton_type"));
        pushButton_type->setGeometry(QRect(120, 70, 100, 100));
        pushButton_type->setMinimumSize(QSize(100, 100));
        pushButton_type->setMaximumSize(QSize(100, 100));
        label_f_type = new QLabel(widget);
        label_f_type->setObjectName(QStringLiteral("label_f_type"));
        label_f_type->setGeometry(QRect(230, 90, 120, 50));
        label_f_type->setMinimumSize(QSize(120, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        label_f_type->setFont(font1);

        retranslateUi(FanKuiJieGuo_Form);

        QMetaObject::connectSlotsByName(FanKuiJieGuo_Form);
    } // setupUi

    void retranslateUi(QWidget *FanKuiJieGuo_Form)
    {
        FanKuiJieGuo_Form->setWindowTitle(QApplication::translate("FanKuiJieGuo_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_stuimange->setText(QString());
        label_f->setText(QApplication::translate("FanKuiJieGuo_Form", "1", Q_NULLPTR));
        label_stuname->setText(QApplication::translate("FanKuiJieGuo_Form", "2", Q_NULLPTR));
        pushButton_type->setText(QString());
        label_f_type->setText(QApplication::translate("FanKuiJieGuo_Form", "\350\257\267\346\261\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FanKuiJieGuo_Form: public Ui_FanKuiJieGuo_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANKUIJIEGUO_FORM_H
