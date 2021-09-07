/********************************************************************************
** Form generated from reading UI file 'zhuxiao_form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUXIAO_FORM_H
#define UI_ZHUXIAO_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuxiao_Form
{
public:
    QGridLayout *gridLayout;
    QLabel *label_tiatle;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_body;
    QLabel *label_body_tell;
    QLabel *label_body_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pbn_zhuxiao;
    QPushButton *pbn_zhuxiao_close;
    QTextEdit *textEdit;

    void setupUi(QWidget *zhuxiao_Form)
    {
        if (zhuxiao_Form->objectName().isEmpty())
            zhuxiao_Form->setObjectName(QStringLiteral("zhuxiao_Form"));
        zhuxiao_Form->resize(406, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        zhuxiao_Form->setWindowIcon(icon);
        zhuxiao_Form->setStyleSheet(QString::fromUtf8("QWidget#zhuxiao_Form\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QTextEdit\n"
"{\n"
"	border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(255,255,255);\n"
"}\n"
"QLabel\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 555 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: rgb(0, 90, 255);\n"
"    border-radius: 20px;\n"
"	color:rgb(255,255,255);\n"
"	font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color: rgb(0, 90, 255);	\n"
"    background-repeat: no-repeat;\n"
"    background-position: left center;\n"
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
        gridLayout = new QGridLayout(zhuxiao_Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_tiatle = new QLabel(zhuxiao_Form);
        label_tiatle->setObjectName(QStringLiteral("label_tiatle"));

        gridLayout->addWidget(label_tiatle, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 3, 1, 1);

        label_body = new QLabel(zhuxiao_Form);
        label_body->setObjectName(QStringLiteral("label_body"));

        gridLayout->addWidget(label_body, 2, 0, 1, 1);

        label_body_tell = new QLabel(zhuxiao_Form);
        label_body_tell->setObjectName(QStringLiteral("label_body_tell"));

        gridLayout->addWidget(label_body_tell, 2, 1, 1, 1);

        label_body_3 = new QLabel(zhuxiao_Form);
        label_body_3->setObjectName(QStringLiteral("label_body_3"));

        gridLayout->addWidget(label_body_3, 2, 2, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 3, 1, 1);

        pbn_zhuxiao = new QPushButton(zhuxiao_Form);
        pbn_zhuxiao->setObjectName(QStringLiteral("pbn_zhuxiao"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbn_zhuxiao->sizePolicy().hasHeightForWidth());
        pbn_zhuxiao->setSizePolicy(sizePolicy);
        pbn_zhuxiao->setMinimumSize(QSize(120, 40));
        pbn_zhuxiao->setMaximumSize(QSize(120, 40));

        gridLayout->addWidget(pbn_zhuxiao, 6, 0, 1, 3);

        pbn_zhuxiao_close = new QPushButton(zhuxiao_Form);
        pbn_zhuxiao_close->setObjectName(QStringLiteral("pbn_zhuxiao_close"));
        pbn_zhuxiao_close->setMinimumSize(QSize(120, 40));
        pbn_zhuxiao_close->setMaximumSize(QSize(120, 40));
        pbn_zhuxiao_close->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(pbn_zhuxiao_close, 6, 4, 1, 1);

        textEdit = new QTextEdit(zhuxiao_Form);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 4, 0, 1, 5);


        retranslateUi(zhuxiao_Form);

        QMetaObject::connectSlotsByName(zhuxiao_Form);
    } // setupUi

    void retranslateUi(QWidget *zhuxiao_Form)
    {
        zhuxiao_Form->setWindowTitle(QApplication::translate("zhuxiao_Form", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        label_tiatle->setText(QApplication::translate("zhuxiao_Form", "\346\263\250\351\224\200\350\264\246\345\217\267", Q_NULLPTR));
        label_body->setText(QApplication::translate("zhuxiao_Form", "\345\260\206", Q_NULLPTR));
        label_body_tell->setText(QString());
        label_body_3->setText(QApplication::translate("zhuxiao_Form", "\346\211\200\347\273\221\345\256\232\347\232\204\350\264\246\345\217\267\346\263\250\351\224\200\345\220\216\344\273\245\344\270\213\344\277\241\346\201\257\345\260\206\350\242\253\346\270\205\347\251\272\344\270\224\346\227\240\346\263\225\346\211\276\345\233\236", Q_NULLPTR));
        pbn_zhuxiao->setText(QApplication::translate("zhuxiao_Form", "\346\263\250\351\224\200\350\264\246\345\217\267", Q_NULLPTR));
        pbn_zhuxiao_close->setText(QApplication::translate("zhuxiao_Form", "\345\217\226\346\266\210", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("zhuxiao_Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:12pt;\">1\343\200\201\347\217\255\347\272\247\347\233\270\345\205\263\344\277\241\346\201\257</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Microsoft YaHei'; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-family:'Microsoft YaHei'; font-size:12pt;\">2\343\200\201\344\275\234\344\270\232\347\233\270\345\205\263\346\225\260\346\215\256\344\277\241\346\201\257</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Microsoft YaHei'; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei'; font-size:12pt;\">3\343\200\201\344\270\252\344\272\272\345\217\212\350\264\246\345\217\267\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class zhuxiao_Form: public Ui_zhuxiao_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUXIAO_FORM_H
