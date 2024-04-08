/****************************************************************************
** Meta object code from reading C++ file 'keycardsactuator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keycardsactuator.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keycardsactuator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS = QtMocHelpers::stringData(
    "KeyCardsActuator",
    "leftCardStatusChanged",
    "",
    "leftCardStatus",
    "rightCardStatusChanged",
    "rightCardStatus",
    "allCardMoveFinished",
    "leftCardFinishedMoving",
    "rightCardFinishedMoving",
    "ghost",
    "setLeftCardStatus",
    "setRightCardStatus",
    "printRightCardStatusWhenChanged",
    "handleReadyRead",
    "approchLeftCard",
    "approchRightCard"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[17];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[23];
    char stringdata5[16];
    char stringdata6[20];
    char stringdata7[23];
    char stringdata8[24];
    char stringdata9[6];
    char stringdata10[18];
    char stringdata11[19];
    char stringdata12[32];
    char stringdata13[16];
    char stringdata14[16];
    char stringdata15[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS_t qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "KeyCardsActuator"
        QT_MOC_LITERAL(17, 21),  // "leftCardStatusChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 14),  // "leftCardStatus"
        QT_MOC_LITERAL(55, 22),  // "rightCardStatusChanged"
        QT_MOC_LITERAL(78, 15),  // "rightCardStatus"
        QT_MOC_LITERAL(94, 19),  // "allCardMoveFinished"
        QT_MOC_LITERAL(114, 22),  // "leftCardFinishedMoving"
        QT_MOC_LITERAL(137, 23),  // "rightCardFinishedMoving"
        QT_MOC_LITERAL(161, 5),  // "ghost"
        QT_MOC_LITERAL(167, 17),  // "setLeftCardStatus"
        QT_MOC_LITERAL(185, 18),  // "setRightCardStatus"
        QT_MOC_LITERAL(204, 31),  // "printRightCardStatusWhenChanged"
        QT_MOC_LITERAL(236, 15),  // "handleReadyRead"
        QT_MOC_LITERAL(252, 15),  // "approchLeftCard"
        QT_MOC_LITERAL(268, 16)   // "approchRightCard"
    },
    "KeyCardsActuator",
    "leftCardStatusChanged",
    "",
    "leftCardStatus",
    "rightCardStatusChanged",
    "rightCardStatus",
    "allCardMoveFinished",
    "leftCardFinishedMoving",
    "rightCardFinishedMoving",
    "ghost",
    "setLeftCardStatus",
    "setRightCardStatus",
    "printRightCardStatusWhenChanged",
    "handleReadyRead",
    "approchLeftCard",
    "approchRightCard"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKeyCardsActuatorENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    3 /* Public */,
       4,    1,   89,    2, 0x06,    5 /* Public */,
       6,    0,   92,    2, 0x06,    7 /* Public */,
       7,    0,   93,    2, 0x06,    8 /* Public */,
       8,    0,   94,    2, 0x06,    9 /* Public */,
       9,    0,   95,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   96,    2, 0x0a,   11 /* Public */,
      11,    1,   99,    2, 0x0a,   13 /* Public */,
      12,    0,  102,    2, 0x0a,   15 /* Public */,
      13,    0,  103,    2, 0x08,   16 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  104,    2, 0x02,   17 /* Public */,
      15,    0,  105,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(0), 0,
       5, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject KeyCardsActuator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKeyCardsActuatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS_t,
        // property 'leftCardStatus'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rightCardStatus'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KeyCardsActuator, std::true_type>,
        // method 'leftCardStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rightCardStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'allCardMoveFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'leftCardFinishedMoving'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rightCardFinishedMoving'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ghost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLeftCardStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRightCardStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'printRightCardStatusWhenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'approchLeftCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'approchRightCard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void KeyCardsActuator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyCardsActuator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->leftCardStatusChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->rightCardStatusChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->allCardMoveFinished(); break;
        case 3: _t->leftCardFinishedMoving(); break;
        case 4: _t->rightCardFinishedMoving(); break;
        case 5: _t->ghost(); break;
        case 6: _t->setLeftCardStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setRightCardStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->printRightCardStatusWhenChanged(); break;
        case 9: _t->handleReadyRead(); break;
        case 10: _t->approchLeftCard(); break;
        case 11: _t->approchRightCard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KeyCardsActuator::*)(int );
            if (_t _q_method = &KeyCardsActuator::leftCardStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KeyCardsActuator::*)(int );
            if (_t _q_method = &KeyCardsActuator::rightCardStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KeyCardsActuator::*)();
            if (_t _q_method = &KeyCardsActuator::allCardMoveFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KeyCardsActuator::*)();
            if (_t _q_method = &KeyCardsActuator::leftCardFinishedMoving; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KeyCardsActuator::*)();
            if (_t _q_method = &KeyCardsActuator::rightCardFinishedMoving; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KeyCardsActuator::*)();
            if (_t _q_method = &KeyCardsActuator::ghost; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KeyCardsActuator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->leftCardStatus(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rightCardStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KeyCardsActuator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeftCardStatus(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRightCardStatus(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *KeyCardsActuator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyCardsActuator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKeyCardsActuatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyCardsActuator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void KeyCardsActuator::leftCardStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeyCardsActuator::rightCardStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KeyCardsActuator::allCardMoveFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KeyCardsActuator::leftCardFinishedMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KeyCardsActuator::rightCardFinishedMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KeyCardsActuator::ghost()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
