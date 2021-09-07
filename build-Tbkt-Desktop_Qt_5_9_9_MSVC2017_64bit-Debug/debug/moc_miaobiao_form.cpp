/****************************************************************************
** Meta object code from reading C++ file 'miaobiao_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/miaobiao_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'miaobiao_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_miaobiao_Form_t {
    QByteArrayData data[10];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_miaobiao_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_miaobiao_Form_t qt_meta_stringdata_miaobiao_Form = {
    {
QT_MOC_LITERAL(0, 0, 13), // "miaobiao_Form"
QT_MOC_LITERAL(1, 14, 17), // "sendMiaobiaoClose"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "set_showflag_true"
QT_MOC_LITERAL(4, 51, 18), // "set_showflag_false"
QT_MOC_LITERAL(5, 70, 8), // "TimeSlot"
QT_MOC_LITERAL(6, 79, 28), // "on_pushButton_kaishi_clicked"
QT_MOC_LITERAL(7, 108, 36), // "on_pushButton_chongxinkaishi_..."
QT_MOC_LITERAL(8, 145, 28), // "on_pushButton_quxiao_clicked"
QT_MOC_LITERAL(9, 174, 26) // "on_pushButton_jixu_clicked"

    },
    "miaobiao_Form\0sendMiaobiaoClose\0\0"
    "set_showflag_true\0set_showflag_false\0"
    "TimeSlot\0on_pushButton_kaishi_clicked\0"
    "on_pushButton_chongxinkaishi_clicked\0"
    "on_pushButton_quxiao_clicked\0"
    "on_pushButton_jixu_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_miaobiao_Form[] = {

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
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void miaobiao_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        miaobiao_Form *_t = static_cast<miaobiao_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMiaobiaoClose(); break;
        case 1: _t->set_showflag_true(); break;
        case 2: _t->set_showflag_false(); break;
        case 3: _t->TimeSlot(); break;
        case 4: _t->on_pushButton_kaishi_clicked(); break;
        case 5: _t->on_pushButton_chongxinkaishi_clicked(); break;
        case 6: _t->on_pushButton_quxiao_clicked(); break;
        case 7: _t->on_pushButton_jixu_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (miaobiao_Form::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&miaobiao_Form::sendMiaobiaoClose)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject miaobiao_Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_miaobiao_Form.data,
      qt_meta_data_miaobiao_Form,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *miaobiao_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *miaobiao_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_miaobiao_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int miaobiao_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void miaobiao_Form::sendMiaobiaoClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
