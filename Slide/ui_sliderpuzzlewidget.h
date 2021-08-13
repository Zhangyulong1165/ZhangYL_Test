/********************************************************************************
** Form generated from reading UI file 'sliderpuzzlewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERPUZZLEWIDGET_H
#define UI_SLIDERPUZZLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "puzzlewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SliderPuzzleWidget
{
public:
    QVBoxLayout *verticalLayout;
    PuzzleWidget *puzzlewidget;
    QSlider *horizontalSlider;

    void setupUi(QWidget *SliderPuzzleWidget)
    {
        if (SliderPuzzleWidget->objectName().isEmpty())
            SliderPuzzleWidget->setObjectName(QString::fromUtf8("SliderPuzzleWidget"));
        SliderPuzzleWidget->resize(717, 320);
        verticalLayout = new QVBoxLayout(SliderPuzzleWidget);
        verticalLayout->setSpacing(14);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        puzzlewidget = new PuzzleWidget(SliderPuzzleWidget);
        puzzlewidget->setObjectName(QString::fromUtf8("puzzlewidget"));

        verticalLayout->addWidget(puzzlewidget);

        horizontalSlider = new QSlider(SliderPuzzleWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"    border: 1px solid transparent;\n"
"}\n"
"QSlider::groove{\n"
"    border: 1px solid #999999;\n"
"    background: #FFFFFF;\n"
"}\n"
"QSlider::handle {/*\350\256\276\347\275\256\344\270\255\351\227\264\347\232\204\351\202\243\344\270\252\346\273\221\345\212\250\347\232\204\351\224\256*/                           \n"
"    border: 1px solid #999999;\n"
"    background: #8BF;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    height: 3px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    left:5px; right: 5px;\n"
"}\n"
"QSlider::groove:vertical{\n"
"    width: 3px;\n"
"    top: 5px; bottom: 5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"    width: 6px;\n"
"    margin: -7px; /* height */\n"
"}\n"
"QSlider::handle:vertical{\n"
"    height: 6px;\n"
"    margin: -7px; /* height */\n"
"}"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        retranslateUi(SliderPuzzleWidget);

        QMetaObject::connectSlotsByName(SliderPuzzleWidget);
    } // setupUi

    void retranslateUi(QWidget *SliderPuzzleWidget)
    {
        SliderPuzzleWidget->setWindowTitle(QApplication::translate("SliderPuzzleWidget", "SliderPuzzleWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SliderPuzzleWidget: public Ui_SliderPuzzleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERPUZZLEWIDGET_H
