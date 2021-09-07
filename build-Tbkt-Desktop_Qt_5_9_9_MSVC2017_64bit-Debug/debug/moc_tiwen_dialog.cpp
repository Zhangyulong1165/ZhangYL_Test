/****************************************************************************
** Meta object code from reading C++ file 'tiwen_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/tiwen_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tiwen_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TiWen_Dialog_t {
    QByteArrayData data[11];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TiWen_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TiWen_Dialog_t qt_meta_stringdata_TiWen_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TiWen_Dialog"
QT_MOC_LITERAL(1, 13, 17), // "set_showflag_true"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "set_showflag_false"
QT_MOC_LITERAL(4, 51, 30), // "on_pushButton_dianming_clicked"
QT_MOC_LITERAL(5, 82, 16), // "on_timer_timeout"
QT_MOC_LITERAL(6, 99, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(7, 127, 29), // "on_pushButton_close_2_clicked"
QT_MOC_LITERAL(8, 157, 30), // "on_pushButton_biaoyang_clicked"
QT_MOC_LITERAL(9, 188, 19), // "on_timer_changeName"
QT_MOC_LITERAL(10, 208, 31) // "on_pushButton_ddianming_clicked"

    },
    "TiWen_Dialog\0set_showflag_true\0\0"
    "set_showflag_false\0on_pushButton_dianming_clicked\0"
    "on_timer_timeout\0on_pushButton_close_clicked\0"
    "on_pushButton_close_2_clicked\0"
    "on_pushButton_biaoyang_clicked\0"
    "on_timer_changeName\0on_pushButton_ddianming_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TiWen_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void TiWen_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TiWen_Dialog *_t = static_cast<TiWen_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_showflag_true(); break;
        case 1: _t->set_showflag_false(); break;
        case 2: _t->on_pushButton_dianming_clicked(); break;
        case 3: _t->on_timer_timeout(); break;
        case 4: _t->on_pushButton_close_clicked(); break;
        case 5: _t->on_pushButton_close_2_clicked(); break;
        case 6: _t->on_pushButton_biaoyang_clicked(); break;
        case 7: _t->on_timer_changeName(); break;
        case 8: _t->on_pushButton_ddianming_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TiWen_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TiWen_Dialog.data,
      qt_meta_data_TiWen_Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TiWen_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TiWen_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TiWen_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TiWen_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
