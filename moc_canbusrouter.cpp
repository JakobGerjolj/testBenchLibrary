/****************************************************************************
** Meta object code from reading C++ file 'canbusrouter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "canbusrouter.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canbusrouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCanBusRouterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCanBusRouterENDCLASS = QtMocHelpers::stringData(
    "CanBusRouter",
    "errorOccurred",
    "",
    "framesReceived",
    "QSet<int>",
    "ecuIdColl",
    "framesWritten",
    "framesCount",
    "writeFrame",
    "QCanBusFrame",
    "frame",
    "onErrorOccurred",
    "QCanBusDevice::CanBusError",
    "error",
    "onFramesReceived"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCanBusRouterENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[14];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[13];
    char stringdata10[6];
    char stringdata11[16];
    char stringdata12[27];
    char stringdata13[6];
    char stringdata14[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCanBusRouterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCanBusRouterENDCLASS_t qt_meta_stringdata_CLASSCanBusRouterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "CanBusRouter"
        QT_MOC_LITERAL(13, 13),  // "errorOccurred"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 14),  // "framesReceived"
        QT_MOC_LITERAL(43, 9),  // "QSet<int>"
        QT_MOC_LITERAL(53, 9),  // "ecuIdColl"
        QT_MOC_LITERAL(63, 13),  // "framesWritten"
        QT_MOC_LITERAL(77, 11),  // "framesCount"
        QT_MOC_LITERAL(89, 10),  // "writeFrame"
        QT_MOC_LITERAL(100, 12),  // "QCanBusFrame"
        QT_MOC_LITERAL(113, 5),  // "frame"
        QT_MOC_LITERAL(119, 15),  // "onErrorOccurred"
        QT_MOC_LITERAL(135, 26),  // "QCanBusDevice::CanBusError"
        QT_MOC_LITERAL(162, 5),  // "error"
        QT_MOC_LITERAL(168, 16)   // "onFramesReceived"
    },
    "CanBusRouter",
    "errorOccurred",
    "",
    "framesReceived",
    "QSet<int>",
    "ecuIdColl",
    "framesWritten",
    "framesCount",
    "writeFrame",
    "QCanBusFrame",
    "frame",
    "onErrorOccurred",
    "QCanBusDevice::CanBusError",
    "error",
    "onFramesReceived"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCanBusRouterENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    1,   51,    2, 0x06,    2 /* Public */,
       6,    1,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   57,    2, 0x0a,    6 /* Public */,
      11,    1,   60,    2, 0x08,    8 /* Private */,
      14,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CanBusRouter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCanBusRouterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCanBusRouterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCanBusRouterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CanBusRouter, std::true_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'framesReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<int> &, std::false_type>,
        // method 'framesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'writeFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCanBusFrame &, std::false_type>,
        // method 'onErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCanBusDevice::CanBusError, std::false_type>,
        // method 'onFramesReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CanBusRouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanBusRouter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->errorOccurred(); break;
        case 1: _t->framesReceived((*reinterpret_cast< std::add_pointer_t<QSet<int>>>(_a[1]))); break;
        case 2: _t->framesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->writeFrame((*reinterpret_cast< std::add_pointer_t<QCanBusFrame>>(_a[1]))); break;
        case 4: _t->onErrorOccurred((*reinterpret_cast< std::add_pointer_t<QCanBusDevice::CanBusError>>(_a[1]))); break;
        case 5: _t->onFramesReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanBusRouter::*)();
            if (_t _q_method = &CanBusRouter::errorOccurred; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CanBusRouter::*)(const QSet<int> & );
            if (_t _q_method = &CanBusRouter::framesReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CanBusRouter::*)(qint64 );
            if (_t _q_method = &CanBusRouter::framesWritten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *CanBusRouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanBusRouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCanBusRouterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CanBusRouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CanBusRouter::errorOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CanBusRouter::framesReceived(const QSet<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CanBusRouter::framesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
