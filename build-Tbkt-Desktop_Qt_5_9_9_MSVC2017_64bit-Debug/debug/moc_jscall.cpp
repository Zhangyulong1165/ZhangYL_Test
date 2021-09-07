/****************************************************************************
** Meta object code from reading C++ file 'jscall.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/jscall.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jscall.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsCall_t {
    QByteArrayData data[8];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsCall_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsCall_t qt_meta_stringdata_JsCall = {
    {
QT_MOC_LITERAL(0, 0, 6), // "JsCall"
QT_MOC_LITERAL(1, 7, 11), // "openNotepad"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "msg1"
QT_MOC_LITERAL(4, 25, 9), // "weikeShow"
QT_MOC_LITERAL(5, 35, 8), // "jscallme"
QT_MOC_LITERAL(6, 44, 7), // "msgtype"
QT_MOC_LITERAL(7, 52, 3) // "msg"

    },
    "JsCall\0openNotepad\0\0msg1\0weikeShow\0"
    "jscallme\0msgtype\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsCall[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void JsCall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JsCall *_t = static_cast<JsCall *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openNotepad((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->weikeShow(); break;
        case 2: _t->jscallme((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (JsCall::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsCall::openNotepad)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JsCall::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsCall::weikeShow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject JsCall::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsCall.data,
      qt_meta_data_JsCall,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JsCall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsCall::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsCall.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsCall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void JsCall::openNotepad(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsCall::weikeShow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
