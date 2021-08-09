/****************************************************************************
** Meta object code from reading C++ file 'capturewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/capture/widget/capturewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capturewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureWidget_t {
    QByteArrayData data[18];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureWidget_t qt_meta_stringdata_CaptureWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CaptureWidget"
QT_MOC_LITERAL(1, 14, 13), // "capturePixmap"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "pixmap"
QT_MOC_LITERAL(4, 36, 14), // "copyScreenshot"
QT_MOC_LITERAL(5, 51, 14), // "saveScreenshot"
QT_MOC_LITERAL(6, 66, 13), // "uploadToImgur"
QT_MOC_LITERAL(7, 80, 15), // "openWithProgram"
QT_MOC_LITERAL(8, 96, 4), // "undo"
QT_MOC_LITERAL(9, 101, 10), // "leftResize"
QT_MOC_LITERAL(10, 112, 11), // "rightResize"
QT_MOC_LITERAL(11, 124, 8), // "upResize"
QT_MOC_LITERAL(12, 133, 10), // "downResize"
QT_MOC_LITERAL(13, 144, 8), // "setState"
QT_MOC_LITERAL(14, 153, 14), // "CaptureButton*"
QT_MOC_LITERAL(15, 168, 18), // "handleButtonSignal"
QT_MOC_LITERAL(16, 187, 20), // "CaptureTool::Request"
QT_MOC_LITERAL(17, 208, 1) // "r"

    },
    "CaptureWidget\0capturePixmap\0\0pixmap\0"
    "copyScreenshot\0saveScreenshot\0"
    "uploadToImgur\0openWithProgram\0undo\0"
    "leftResize\0rightResize\0upResize\0"
    "downResize\0setState\0CaptureButton*\0"
    "handleButtonSignal\0CaptureTool::Request\0"
    "r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      15,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void CaptureWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaptureWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->capturePixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->copyScreenshot(); break;
        case 2: _t->saveScreenshot(); break;
        case 3: _t->uploadToImgur(); break;
        case 4: _t->openWithProgram(); break;
        case 5: { bool _r = _t->undo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->leftResize(); break;
        case 7: _t->rightResize(); break;
        case 8: _t->upResize(); break;
        case 9: _t->downResize(); break;
        case 10: _t->setState((*reinterpret_cast< CaptureButton*(*)>(_a[1]))); break;
        case 11: _t->handleButtonSignal((*reinterpret_cast< CaptureTool::Request(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
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
            using _t = void (CaptureWidget::*)(const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CaptureWidget::capturePixmap)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CaptureWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CaptureWidget.data,
    qt_meta_data_CaptureWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaptureWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CaptureWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CaptureWidget::capturePixmap(const QPixmap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
