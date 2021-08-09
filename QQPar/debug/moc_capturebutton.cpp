/****************************************************************************
** Meta object code from reading C++ file 'capturebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/capture/widget/capturebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capturebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureButton_t {
    QByteArrayData data[15];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureButton_t qt_meta_stringdata_CaptureButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CaptureButton"
QT_MOC_LITERAL(1, 14, 13), // "pressedButton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "CaptureButton*"
QT_MOC_LITERAL(4, 44, 10), // "ButtonType"
QT_MOC_LITERAL(5, 55, 11), // "TYPE_PENCIL"
QT_MOC_LITERAL(6, 67, 10), // "TYPE_ARROW"
QT_MOC_LITERAL(7, 78, 14), // "TYPE_SELECTION"
QT_MOC_LITERAL(8, 93, 11), // "TYPE_CIRCLE"
QT_MOC_LITERAL(9, 105, 9), // "TYPE_BLUR"
QT_MOC_LITERAL(10, 115, 18), // "TYPE_MOVESELECTION"
QT_MOC_LITERAL(11, 134, 9), // "TYPE_UNDO"
QT_MOC_LITERAL(12, 144, 9), // "TYPE_COPY"
QT_MOC_LITERAL(13, 154, 9), // "TYPE_SAVE"
QT_MOC_LITERAL(14, 164, 9) // "TYPE_EXIT"

    },
    "CaptureButton\0pressedButton\0\0"
    "CaptureButton*\0ButtonType\0TYPE_PENCIL\0"
    "TYPE_ARROW\0TYPE_SELECTION\0TYPE_CIRCLE\0"
    "TYPE_BLUR\0TYPE_MOVESELECTION\0TYPE_UNDO\0"
    "TYPE_COPY\0TYPE_SAVE\0TYPE_EXIT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,   10,   27,

 // enum data: key, value
       5, uint(CaptureButton::TYPE_PENCIL),
       6, uint(CaptureButton::TYPE_ARROW),
       7, uint(CaptureButton::TYPE_SELECTION),
       8, uint(CaptureButton::TYPE_CIRCLE),
       9, uint(CaptureButton::TYPE_BLUR),
      10, uint(CaptureButton::TYPE_MOVESELECTION),
      11, uint(CaptureButton::TYPE_UNDO),
      12, uint(CaptureButton::TYPE_COPY),
      13, uint(CaptureButton::TYPE_SAVE),
      14, uint(CaptureButton::TYPE_EXIT),

       0        // eod
};

void CaptureButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaptureButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressedButton((*reinterpret_cast< CaptureButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CaptureButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaptureButton::*)(CaptureButton * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureButton::pressedButton)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CaptureButton::staticMetaObject = { {
    &QPushButton::staticMetaObject,
    qt_meta_stringdata_CaptureButton.data,
    qt_meta_data_CaptureButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaptureButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int CaptureButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CaptureButton::pressedButton(CaptureButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
