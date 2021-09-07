/****************************************************************************
** Meta object code from reading C++ file 'beikeppt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Tbkt/beikeppt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'beikeppt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BeiKePpt_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BeiKePpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BeiKePpt_t qt_meta_stringdata_BeiKePpt = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BeiKePpt"
QT_MOC_LITERAL(1, 9, 12), // "openBeikeppt"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "filename"
QT_MOC_LITERAL(4, 32, 12), // "httpFinished"
QT_MOC_LITERAL(5, 45, 13), // "httpReadyRead"
QT_MOC_LITERAL(6, 59, 22), // "updateDataReadProgress"
QT_MOC_LITERAL(7, 82, 18), // "pushButton_clicked"
QT_MOC_LITERAL(8, 101, 6) // "ppturl"

    },
    "BeiKePpt\0openBeikeppt\0\0filename\0"
    "httpFinished\0httpReadyRead\0"
    "updateDataReadProgress\0pushButton_clicked\0"
    "ppturl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BeiKePpt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    2,   44,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QUrl,    8,

       0        // eod
};

void BeiKePpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BeiKePpt *_t = static_cast<BeiKePpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openBeikeppt((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->httpFinished(); break;
        case 2: _t->httpReadyRead(); break;
        case 3: _t->updateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->pushButton_clicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BeiKePpt::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BeiKePpt::openBeikeppt)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BeiKePpt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BeiKePpt.data,
      qt_meta_data_BeiKePpt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BeiKePpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BeiKePpt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BeiKePpt.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BeiKePpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BeiKePpt::openBeikeppt(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
