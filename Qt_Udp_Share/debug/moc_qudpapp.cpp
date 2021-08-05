/****************************************************************************
** Meta object code from reading C++ file 'qudpapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qudpapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qudpapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QUdpApp_t {
    QByteArrayData data[12];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QUdpApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QUdpApp_t qt_meta_stringdata_QUdpApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QUdpApp"
QT_MOC_LITERAL(1, 8, 20), // "on_sendSigRb_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "on_sendMulRb_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_sendBroadRb_clicked"
QT_MOC_LITERAL(5, 74, 17), // "on_sendBt_clicked"
QT_MOC_LITERAL(6, 92, 17), // "on_recvCb_clicked"
QT_MOC_LITERAL(7, 110, 7), // "checked"
QT_MOC_LITERAL(8, 118, 24), // "on_recvJoinMulBt_clicked"
QT_MOC_LITERAL(9, 143, 25), // "on_recvLeaveMulBt_clicked"
QT_MOC_LITERAL(10, 169, 36), // "on_sendMesEdit_cursorPosition..."
QT_MOC_LITERAL(11, 206, 9) // "read_data"

    },
    "QUdpApp\0on_sendSigRb_clicked\0\0"
    "on_sendMulRb_clicked\0on_sendBroadRb_clicked\0"
    "on_sendBt_clicked\0on_recvCb_clicked\0"
    "checked\0on_recvJoinMulBt_clicked\0"
    "on_recvLeaveMulBt_clicked\0"
    "on_sendMesEdit_cursorPositionChanged\0"
    "read_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QUdpApp[] = {

 // content:
       8,       // revision
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
       6,    1,   63,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QUdpApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QUdpApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sendSigRb_clicked(); break;
        case 1: _t->on_sendMulRb_clicked(); break;
        case 2: _t->on_sendBroadRb_clicked(); break;
        case 3: _t->on_sendBt_clicked(); break;
        case 4: _t->on_recvCb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_recvJoinMulBt_clicked(); break;
        case 6: _t->on_recvLeaveMulBt_clicked(); break;
        case 7: _t->on_sendMesEdit_cursorPositionChanged(); break;
        case 8: _t->read_data(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QUdpApp::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QUdpApp.data,
    qt_meta_data_QUdpApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QUdpApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUdpApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QUdpApp.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QUdpApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
