/****************************************************************************
** Meta object code from reading C++ file 'deposit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/deposit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deposit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Deposit_t {
    QByteArrayData data[9];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Deposit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Deposit_t qt_meta_stringdata_Deposit = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Deposit"
QT_MOC_LITERAL(1, 8, 20), // "on_calculate_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(4, 52, 5), // "index"
QT_MOC_LITERAL(5, 58, 33), // "on_capitalizationCheckBox_cli..."
QT_MOC_LITERAL(6, 92, 30), // "on_plus_minus_checkBox_clicked"
QT_MOC_LITERAL(7, 123, 20), // "on_plusBox_activated"
QT_MOC_LITERAL(8, 144, 21) // "on_minusBox_activated"

    },
    "Deposit\0on_calculate_clicked\0\0"
    "on_comboBox_activated\0index\0"
    "on_capitalizationCheckBox_clicked\0"
    "on_plus_minus_checkBox_clicked\0"
    "on_plusBox_activated\0on_minusBox_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Deposit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Deposit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Deposit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_calculate_clicked(); break;
        case 1: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_capitalizationCheckBox_clicked(); break;
        case 3: _t->on_plus_minus_checkBox_clicked(); break;
        case 4: _t->on_plusBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_minusBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Deposit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Deposit.data,
    qt_meta_data_Deposit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Deposit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Deposit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Deposit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Deposit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
