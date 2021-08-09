#-------------------------------------------------
#
# Project created by QtCreator 2021-04-22T13:09:34
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += webchannel
#QT += webengine
#QT += webenginewidgets
QT          +=axcontainer
INCLUDEPATH += C:/OpenSSL-Win32/include

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

UI_DIR = ./UI
DESTDIR = bin
TARGET = Tbkt
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    add_flower.cpp \
    beikeppt.cpp \
    chazhao_dialog.cpp \
    daojishi_dialog.cpp \
    dibuform.cpp \
    drawwidget.cpp \
    fankui_form.cpp \
    fankuijieguo_form.cpp \
    get_code.cpp \
    getusertoken.cpp \
    huaban_form.cpp \
    huabi_form.cpp \
    hudong_dialog.cpp \
    jishi_form.cpp \
    jscall.cpp \
    jushou_dialog.cpp \
    login_widget.cpp \
        main.cpp \
    miaobiao_form.cpp \
    open_office.cpp \
    paihang_form.cpp \
    prepare.cpp \
    qiangda_dialog.cpp \
    set_ansform.cpp \
    settingdialog.cpp \
    settingform.cpp \
    shengji_form.cpp \
    tbdev.cpp \
        tbkt_widget.cpp \
    tbktclose_dialog.cpp \
    tbktclose_form.cpp \
    tip_dialog.cpp \
    tiwen_dialog.cpp \
    tltipswidget.cpp \
    web_ppt.cpp \
    weikeshow.cpp \
    xieyidialog.cpp \
    ximage.cpp \
    zezhao_widget.cpp \
    zhuxiao_form.cpp \
    ziyuan_form.cpp

HEADERS += \
    WebId.h \
    add_flower.h \
    beikeppt.h \
    chazhao_dialog.h \
    daojishi_dialog.h \
    dibuform.h \
    drawwidget.h \
    fankui_form.h \
    fankuijieguo_form.h \
    get_code.h \
    getusertoken.h \
    huaban_form.h \
    huabi_form.h \
    hudong_dialog.h \
    jishi_form.h \
    jscall.h \
    jushou_dialog.h \
    login_widget.h \
    miaobiao_form.h \
    open_office.h \
    paihang_form.h \
    prepare.h \
    qiangda_dialog.h \
    set_ansform.h \
    settingdialog.h \
    settingform.h \
    shengji_form.h \
    tbdev.h \
        tbkt_widget.h \
    tbktclose_dialog.h \
    tbktclose_form.h \
    tip_dialog.h \
    tiwen_dialog.h \
    tltipswidget.h \
    web_ppt.h \
    weikeshow.h \
    xieyidialog.h \
    ximage.h \
    zezhao_widget.h \
    zhuxiao_form.h \
    ziyuan_form.h
QT  +=

FORMS += \
    chazhao_dialog.ui \
    daojishi_dialog.ui \
    dibuform.ui \
    fankui_form.ui \
    fankuijieguo_form.ui \
    huaban_form.ui \
    huabi_form.ui \
    hudong_dialog.ui \
    jishi_form.ui \
    jushou_dialog.ui \
    login_widget.ui \
    miaobiao_form.ui \
    paihang_form.ui \
    qiangda_dialog.ui \
    set_ansform.ui \
    settingdialog.ui \
    settingform.ui \
    shengji_form.ui \
        tbkt_widget.ui \
    tbktclose_dialog.ui \
    tbktclose_form.ui \
    tip_dialog.ui \
    tiwen_dialog.ui \
    xieyidialog.ui \
    zhuxiao_form.ui \
    ziyuan_form.ui

RESOURCES +=
CONFIG += C++11

DISTFILES +=

win32: LIBS += -L$$PWD/lib/ -lSLABHIDtoUART
win32: LIBS += -L$$PWD/lib/ -lCH9326DLL
win32: LIBS += -L$$PWD/lib/ -lTopicReader

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
