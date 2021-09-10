/********************************************************************************
** Form generated from reading UI file 'irsim.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRSIM_H
#define UI_IRSIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Irsim
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QWidget *widTop;
    QGridLayout *gridLayout_2;
    QLabel *labTitle;
    QToolButton *tbnZhuJieM;
    QToolButton *tbnFangAn;
    QToolButton *tbnFangZhen;
    QToolButton *tbnXiaoGuo;
    QToolButton *tbnSeeting;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *pageZhuJieM;
    QWidget *pageFangAn;
    QTreeView *treeView;
    QKeySequenceEdit *keySequenceEdit;
    QWidget *pageFangZhen;
    QWidget *pageXiaoGuo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Irsim)
    {
        if (Irsim->objectName().isEmpty())
            Irsim->setObjectName(QStringLiteral("Irsim"));
        Irsim->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/beijingtu.png"), QSize(), QIcon::Normal, QIcon::Off);
        Irsim->setWindowIcon(icon);
        centralwidget = new QWidget(Irsim);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widTop = new QWidget(frame);
        widTop->setObjectName(QStringLiteral("widTop"));
        gridLayout_2 = new QGridLayout(widTop);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labTitle = new QLabel(widTop);
        labTitle->setObjectName(QStringLiteral("labTitle"));

        gridLayout_2->addWidget(labTitle, 0, 0, 1, 1);

        tbnZhuJieM = new QToolButton(widTop);
        tbnZhuJieM->setObjectName(QStringLiteral("tbnZhuJieM"));
        tbnZhuJieM->setMinimumSize(QSize(80, 70));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/main_about.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbnZhuJieM->setIcon(icon1);
        tbnZhuJieM->setIconSize(QSize(40, 40));
        tbnZhuJieM->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(tbnZhuJieM, 0, 2, 2, 1);

        tbnFangAn = new QToolButton(widTop);
        tbnFangAn->setObjectName(QStringLiteral("tbnFangAn"));
        tbnFangAn->setMinimumSize(QSize(80, 70));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/main_company.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbnFangAn->setIcon(icon2);
        tbnFangAn->setIconSize(QSize(40, 40));
        tbnFangAn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(tbnFangAn, 0, 3, 2, 1);

        tbnFangZhen = new QToolButton(widTop);
        tbnFangZhen->setObjectName(QStringLiteral("tbnFangZhen"));
        tbnFangZhen->setMinimumSize(QSize(80, 70));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/main_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbnFangZhen->setIcon(icon3);
        tbnFangZhen->setIconSize(QSize(40, 40));
        tbnFangZhen->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(tbnFangZhen, 0, 4, 2, 1);

        tbnXiaoGuo = new QToolButton(widTop);
        tbnXiaoGuo->setObjectName(QStringLiteral("tbnXiaoGuo"));
        tbnXiaoGuo->setMinimumSize(QSize(80, 70));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/main_person.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbnXiaoGuo->setIcon(icon4);
        tbnXiaoGuo->setIconSize(QSize(40, 40));
        tbnXiaoGuo->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(tbnXiaoGuo, 0, 5, 2, 1);

        tbnSeeting = new QToolButton(widTop);
        tbnSeeting->setObjectName(QStringLiteral("tbnSeeting"));
        tbnSeeting->setMinimumSize(QSize(80, 70));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/main_config.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbnSeeting->setIcon(icon5);
        tbnSeeting->setIconSize(QSize(40, 40));
        tbnSeeting->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(tbnSeeting, 0, 6, 2, 1);

        horizontalSpacer = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout_3->addWidget(widTop, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageZhuJieM = new QWidget();
        pageZhuJieM->setObjectName(QStringLiteral("pageZhuJieM"));
        stackedWidget->addWidget(pageZhuJieM);
        pageFangAn = new QWidget();
        pageFangAn->setObjectName(QStringLiteral("pageFangAn"));
        treeView = new QTreeView(pageFangAn);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 100, 121, 331));
        keySequenceEdit = new QKeySequenceEdit(pageFangAn);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));
        keySequenceEdit->setGeometry(QRect(270, 270, 113, 25));
        stackedWidget->addWidget(pageFangAn);
        pageFangZhen = new QWidget();
        pageFangZhen->setObjectName(QStringLiteral("pageFangZhen"));
        stackedWidget->addWidget(pageFangZhen);
        pageXiaoGuo = new QWidget();
        pageXiaoGuo->setObjectName(QStringLiteral("pageXiaoGuo"));
        stackedWidget->addWidget(pageXiaoGuo);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        Irsim->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Irsim);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        Irsim->setMenuBar(menubar);
        statusbar = new QStatusBar(Irsim);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Irsim->setStatusBar(statusbar);

        retranslateUi(Irsim);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Irsim);
    } // setupUi

    void retranslateUi(QMainWindow *Irsim)
    {
        Irsim->setWindowTitle(QApplication::translate("Irsim", "Irsim", Q_NULLPTR));
        labTitle->setText(QApplication::translate("Irsim", "TextLabel", Q_NULLPTR));
        tbnZhuJieM->setText(QApplication::translate("Irsim", "\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        tbnFangAn->setText(QApplication::translate("Irsim", "\346\226\271\346\241\210\347\256\241\347\220\206", Q_NULLPTR));
        tbnFangZhen->setText(QApplication::translate("Irsim", "\344\273\277\347\234\237\346\265\213\350\257\225", Q_NULLPTR));
        tbnXiaoGuo->setText(QApplication::translate("Irsim", "\346\225\210\346\236\234\350\257\204\344\274\260", Q_NULLPTR));
        tbnSeeting->setText(QApplication::translate("Irsim", "\347\263\273\347\273\237\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Irsim: public Ui_Irsim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRSIM_H
