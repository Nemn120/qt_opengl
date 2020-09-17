/****************************************************************************
** Meta object code from reading C++ file 'QT1409.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QT1409.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QT1409.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QT1409_t {
    QByteArrayData data[9];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QT1409_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QT1409_t qt_meta_stringdata_QT1409 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QT1409"
QT_MOC_LITERAL(1, 7, 9), // "rotationX"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "rotationY"
QT_MOC_LITERAL(4, 28, 9), // "rotationZ"
QT_MOC_LITERAL(5, 38, 5), // "scale"
QT_MOC_LITERAL(6, 44, 4), // "cube"
QT_MOC_LITERAL(7, 49, 8), // "cilinder"
QT_MOC_LITERAL(8, 58, 4) // "cono"

    },
    "QT1409\0rotationX\0\0rotationY\0rotationZ\0"
    "scale\0cube\0cilinder\0cono"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QT1409[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QT1409::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QT1409 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotationX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->rotationY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->rotationZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->scale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cube(); break;
        case 5: _t->cilinder(); break;
        case 6: _t->cono(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QT1409::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_QT1409.data,
    qt_meta_data_QT1409,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QT1409::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QT1409::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QT1409.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QT1409::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
