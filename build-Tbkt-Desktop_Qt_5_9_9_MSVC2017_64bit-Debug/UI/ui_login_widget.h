/********************************************************************************
** Form generated from reading UI file 'login_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WIDGET_H
#define UI_LOGIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_widget
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame_login;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login_gb;
    QLabel *label_3;
    QPushButton *pushButton_login_zxh;
    QStackedWidget *stackedWidget_tab;
    QWidget *stackedWidget_tabPage1;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_matu;
    QLabel *label;
    QPushButton *pushButton_matu;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_user;
    QLineEdit *lineEdit_Pwd;
    QPushButton *pushButton_Login;
    QSpacerItem *horizontalSpacer_7;
    QWidget *page;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Login_widget)
    {
        if (Login_widget->objectName().isEmpty())
            Login_widget->setObjectName(QStringLiteral("Login_widget"));
        Login_widget->resize(500, 450);
        Login_widget->setMinimumSize(QSize(400, 350));
        Login_widget->setMaximumSize(QSize(500, 450));
        QFont font;
        font.setPointSize(12);
        Login_widget->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login_widget->setWindowIcon(icon);
        Login_widget->setStyleSheet(QString::fromUtf8("QFrame#frame_login\n"
"{\n"
"	background-color:rgb(14 , 150 , 254);;\n"
"	border:1px;\n"
"    border-radius: 10px;\n"
"}\n"
"QWidget#Login_widget\n"
"{\n"
"	background-color:rgb(255,255,255);\n"
"	border-color:rgb(14 , 150 , 254);\n"
"	border:1px;\n"
"	border-style:solid;\n"
"}\n"
"QTabWidget#tabWidget\n"
"{		\n"
"	border:0px;\n"
"	border-color:transparent;\n"
"}\n"
"QWidget#tab,#tab_2,#widget_tab\n"
"{\n"
"	background-color: rgb(255,255,255);\n"
"	border:1px;\n"
"	border-style:solid;\n"
"	border-color: rgb(255, 255, 255);\n"
"	/*border-color:transparent;*/\n"
"}\n"
"QTabWidget::tab-bar { alignment: center; }\n"
"QTabBar::tab \n"
"{\n"
"	height: 40px;\n"
"	min-width: 90px;\n"
"	margin-right: 5px;\n"
"	padding-left: 5px;\n"
"	padding-right: 5px;\n"
"	border:1px;\n"
"	border-style:solid;	\n"
"	border-top-color: rgb(255, 255, 255);\n"
"	border-left-color: rgb(255, 255, 255);\n"
"	border-right-color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(200, 200, 200);\n"
"	color: rgb(200, 200, 200);\n"
"	font: 14pt \""
                        "\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
""));
        gridLayout_5 = new QGridLayout(Login_widget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_login = new QFrame(Login_widget);
        frame_login->setObjectName(QStringLiteral("frame_login"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_login->sizePolicy().hasHeightForWidth());
        frame_login->setSizePolicy(sizePolicy);
        frame_login->setMinimumSize(QSize(500, 450));
        frame_login->setMaximumSize(QSize(500, 500));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_login);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);

        pushButton_login_gb = new QPushButton(frame_login);
        pushButton_login_gb->setObjectName(QStringLiteral("pushButton_login_gb"));
        pushButton_login_gb->setMinimumSize(QSize(30, 30));
        pushButton_login_gb->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/Images/\345\205\263  \351\227\255.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_login_gb->setIcon(icon1);

        gridLayout_4->addWidget(pushButton_login_gb, 0, 4, 1, 1);

        label_3 = new QLabel(frame_login);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        pushButton_login_zxh = new QPushButton(frame_login);
        pushButton_login_zxh->setObjectName(QStringLiteral("pushButton_login_zxh"));
        pushButton_login_zxh->setMinimumSize(QSize(30, 30));
        pushButton_login_zxh->setMaximumSize(QSize(30, 30));
        pushButton_login_zxh->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Images/\346\234\200\345\260\217\345\214\226.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_login_zxh->setIcon(icon2);

        gridLayout_4->addWidget(pushButton_login_zxh, 0, 3, 1, 1);

        stackedWidget_tab = new QStackedWidget(frame_login);
        stackedWidget_tab->setObjectName(QStringLiteral("stackedWidget_tab"));
        stackedWidget_tab->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget_tab->sizePolicy().hasHeightForWidth());
        stackedWidget_tab->setSizePolicy(sizePolicy1);
        stackedWidget_tab->setMinimumSize(QSize(500, 401));
        stackedWidget_tab->setMaximumSize(QSize(500, 401));
        stackedWidget_tab->setStyleSheet(QLatin1String("QStackedWidget#stackedWidget_tab\n"
"{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        stackedWidget_tabPage1 = new QWidget();
        stackedWidget_tabPage1->setObjectName(QStringLiteral("stackedWidget_tabPage1"));
        gridLayout_2 = new QGridLayout(stackedWidget_tabPage1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(stackedWidget_tabPage1);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(500, 400));
        tabWidget->setMaximumSize(QSize(500, 400));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab:selected\n"
"{	\n"
"	color: rgb(0, 170, 255);	\n"
"	border-bottom-color: rgb(0, 170, 255);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_matu = new QLabel(tab);
        label_matu->setObjectName(QStringLiteral("label_matu"));
        label_matu->setGeometry(QRect(150, 35, 200, 200));
        label_matu->setMinimumSize(QSize(200, 200));
        label_matu->setMaximumSize(QSize(200, 200));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 250, 251, 40));
        label->setMinimumSize(QSize(150, 40));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("AcadEref"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        pushButton_matu = new QPushButton(tab);
        pushButton_matu->setObjectName(QStringLiteral("pushButton_matu"));
        pushButton_matu->setGeometry(QRect(150, 35, 200, 200));
        pushButton_matu->setMinimumSize(QSize(200, 200));
        pushButton_matu->setMaximumSize(QSize(200, 200));
        pushButton_matu->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Images/refresh.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButton = new QToolButton(tab_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(100, 100));
        toolButton->setMaximumSize(QSize(100, 100));
        toolButton->setStyleSheet(QLatin1String("border-image: url(:/new/prefix1/Images/logo.png);\n"
"border-radius:45px;\n"
""));

        verticalLayout_2->addWidget(toolButton);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(80, 40));
        label_2->setMaximumSize(QSize(80, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_2->setFont(font3);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_user = new QComboBox(tab_2);
        comboBox_user->setObjectName(QStringLiteral("comboBox_user"));
        comboBox_user->setMinimumSize(QSize(250, 40));
        comboBox_user->setMaximumSize(QSize(250, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        comboBox_user->setFont(font4);

        verticalLayout->addWidget(comboBox_user);

        lineEdit_Pwd = new QLineEdit(tab_2);
        lineEdit_Pwd->setObjectName(QStringLiteral("lineEdit_Pwd"));
        sizePolicy1.setHeightForWidth(lineEdit_Pwd->sizePolicy().hasHeightForWidth());
        lineEdit_Pwd->setSizePolicy(sizePolicy1);
        lineEdit_Pwd->setMinimumSize(QSize(150, 40));
        lineEdit_Pwd->setMaximumSize(QSize(250, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        lineEdit_Pwd->setFont(font5);
        lineEdit_Pwd->setToolTipDuration(0);
        lineEdit_Pwd->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lineEdit_Pwd->setCursorMoveStyle(Qt::LogicalMoveStyle);

        verticalLayout->addWidget(lineEdit_Pwd);

        pushButton_Login = new QPushButton(tab_2);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        sizePolicy1.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy1);
        pushButton_Login->setMinimumSize(QSize(250, 40));
        pushButton_Login->setMaximumSize(QSize(250, 40));
        pushButton_Login->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButton_Login);


        verticalLayout_4->addLayout(verticalLayout);


        gridLayout_3->addLayout(verticalLayout_4, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(104, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        stackedWidget_tab->addWidget(stackedWidget_tabPage1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 230, 61, 31));
        QFont font6;
        font6.setPointSize(14);
        label_4->setFont(font6);
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 290, 111, 41));
        QFont font7;
        font7.setPointSize(16);
        label_5->setFont(font7);
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 80, 120, 120));
        label_6->setMinimumSize(QSize(120, 120));
        label_6->setMaximumSize(QSize(120, 120));
        stackedWidget_tab->addWidget(page);

        gridLayout_4->addWidget(stackedWidget_tab, 1, 0, 1, 5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);


        gridLayout_5->addWidget(frame_login, 0, 0, 1, 1);


        retranslateUi(Login_widget);

        stackedWidget_tab->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login_widget);
    } // setupUi

    void retranslateUi(QWidget *Login_widget)
    {
        Login_widget->setWindowTitle(QApplication::translate("Login_widget", "\345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_login_gb->setText(QString());
        label_3->setText(QApplication::translate("Login_widget", "  \345\220\214\346\255\245\350\257\276\345\240\202", Q_NULLPTR));
        pushButton_login_zxh->setText(QString());
        label_matu->setText(QApplication::translate("Login_widget", "1", Q_NULLPTR));
        label->setText(QApplication::translate("Login_widget", "\345\220\214\346\255\245\350\257\276\345\240\202\346\225\231\345\270\210APP\346\211\253\347\240\201\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_matu->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Login_widget", "\346\211\253\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        toolButton->setText(QString());
        label_2->setText(QApplication::translate("Login_widget", "     \346\225\231\345\256\244\347\211\210", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("Login_widget", "\347\231\273\345\275\225", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Login_widget", "\345\257\206\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login_widget", "\346\225\231\345\256\244\347\211\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login_widget", "\346\255\243\345\234\250\347\231\273\345\275\225\342\200\246", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login_widget: public Ui_Login_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WIDGET_H
