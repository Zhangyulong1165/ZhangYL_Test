/****************************************************************************
** Meta object code from reading C++ file 'jishi_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/jishi_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jishi_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_jishi_Form_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_jishi_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_jishi_Form_t qt_meta_stringdata_jishi_Form = {
    {
QT_MOC_LITERAL(0, 0, 10), // "jishi_Form"
QT_MOC_LITERAL(1, 11, 16), // "sendDaojishiShow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "sendMiaobiaoShow"
QT_MOC_LITERAL(4, 46, 17), // "set_showflag_true"
QT_MOC_LITERAL(5, 64, 18), // "set_showflag_false"
QT_MOC_LITERAL(6, 83, 30), // "on_pushButton_daojishi_clicked"
QT_MOC_LITERAL(7, 114, 30) // "on_pushButton_miaobiao_clicked"

    },
    "jishi_Form\0sendDaojishiShow\0\0"
    "sendMiaobiaoShow\0set_showflag_true\0"
    "set_showflag_false\0on_pushButton_daojishi_clicked\0"
    "on_pushButton_miaobiao_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_jishi_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void jishi_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        jishi_Form *_t = static_cast<jishi_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDaojishiShow(); break;
        case 1: _t->sendMiaobiaoShow(); break;
        case 2: _t->set_showflag_true(); break;
        case 3: _t->set_showflag_false(); break;
        case 4: _t->on_pushButton_daojishi_clicked(); break;
        case 5: _t->on_pushButton_miaobiao_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (jishi_Form::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&jishi_Form::sendDaojishiShow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (jishi_Form::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&jishi_Form::sendMiaobiaoShow)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject jishi_Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_jishi_Form.data,
      qt_meta_data_jishi_Form,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *jishi_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *jishi_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_jishi_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int jishi_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void jishi_Form::sendDaojishiShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void jishi_Form::sendMiaobiaoShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
