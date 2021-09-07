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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Irsim
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
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
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

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

        QMetaObject::connectSlotsByName(Irsim);
    } // setupUi

    void retranslateUi(QMainWindow *Irsim)
    {
        Irsim->setWindowTitle(QApplication::translate("Irsim", "Irsim", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Irsim: public Ui_Irsim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRSIM_H
