/****************************************************************************
** Meta object code from reading C++ file 'qiangda_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/qiangda_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qiangda_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qiangda_Dialog_t {
    QByteArrayData data[15];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qiangda_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qiangda_Dialog_t qt_meta_stringdata_qiangda_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "qiangda_Dialog"
QT_MOC_LITERAL(1, 15, 17), // "set_showflag_true"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "set_showflag_false"
QT_MOC_LITERAL(4, 53, 18), // "on_mytimer_timeout"
QT_MOC_LITERAL(5, 72, 16), // "on_timer_timeout"
QT_MOC_LITERAL(6, 89, 28), // "on_pushButton_guanbi_clicked"
QT_MOC_LITERAL(7, 118, 29), // "on_pushButton_guanbi2_clicked"
QT_MOC_LITERAL(8, 148, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 170, 29), // "on_pushButton_guanbi3_clicked"
QT_MOC_LITERAL(10, 200, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 224, 30), // "on_pushButton_biaoyang_clicked"
QT_MOC_LITERAL(12, 255, 10), // "revDataMsg"
QT_MOC_LITERAL(13, 266, 6), // "cardID"
QT_MOC_LITERAL(14, 273, 6) // "answer"

    },
    "qiangda_Dialog\0set_showflag_true\0\0"
    "set_showflag_false\0on_mytimer_timeout\0"
    "on_timer_timeout\0on_pushButton_guanbi_clicked\0"
    "on_pushButton_guanbi2_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButton_guanbi3_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_biaoyang_clicked\0"
    "revDataMsg\0cardID\0answer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qiangda_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    2,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,

       0        // eod
};

void qiangda_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qiangda_Dialog *_t = static_cast<qiangda_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_showflag_true(); break;
        case 1: _t->set_showflag_false(); break;
        case 2: _t->on_mytimer_timeout(); break;
        case 3: _t->on_timer_timeout(); break;
        case 4: _t->on_pushButton_guanbi_clicked(); break;
        case 5: _t->on_pushButton_guanbi2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_guanbi3_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_biaoyang_clicked(); break;
        case 10: _t->revDataMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qiangda_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qiangda_Dialog.data,
      qt_meta_data_qiangda_Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qiangda_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qiangda_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qiangda_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qiangda_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
