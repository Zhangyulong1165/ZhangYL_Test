/****************************************************************************
** Meta object code from reading C++ file 'jushou_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/jushou_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jushou_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_jushou_Dialog_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jushou_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jushou_Dialog_t qt_meta_stringdata_jushou_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "jushou_Dialog"
QT_MOC_LITERAL(1, 14, 15), // "sendJushouClose"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "set_showflag_true"
QT_MOC_LITERAL(4, 49, 18), // "set_showflag_false"
QT_MOC_LITERAL(5, 68, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 92, 26), // "on_callAgainButton_clicked"
QT_MOC_LITERAL(7, 119, 13), // "stackeChanged"
QT_MOC_LITERAL(8, 133, 5), // "index"
QT_MOC_LITERAL(9, 139, 23), // "on_praiseButton_clicked"
QT_MOC_LITERAL(10, 163, 10), // "revDataMsg"
QT_MOC_LITERAL(11, 174, 6), // "cardID"
QT_MOC_LITERAL(12, 181, 6) // "answer"

    },
    "jushou_Dialog\0sendJushouClose\0\0"
    "set_showflag_true\0set_showflag_false\0"
    "on_pushButton_3_clicked\0"
    "on_callAgainButton_clicked\0stackeChanged\0"
    "index\0on_praiseButton_clicked\0revDataMsg\0"
    "cardID\0answer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jushou_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,

       0        // eod
};

void jushou_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        jushou_Dialog *_t = static_cast<jushou_Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendJushouClose(); break;
        case 1: _t->set_showflag_true(); break;
        case 2: _t->set_showflag_false(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_callAgainButton_clicked(); break;
        case 5: _t->stackeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_praiseButton_clicked(); break;
        case 7: _t->revDataMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (jushou_Dialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&jushou_Dialog::sendJushouClose)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject jushou_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_jushou_Dialog.data,
      qt_meta_data_jushou_Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *jushou_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jushou_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_jushou_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int jushou_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void jushou_Dialog::sendJushouClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
