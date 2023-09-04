/****************************************************************************
** Meta object code from reading C++ file 'dialog_pulse.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dialog_pulse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_pulse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_pulse_t {
    const uint offsetsAndSize[26];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dialog_pulse_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dialog_pulse_t qt_meta_stringdata_Dialog_pulse = {
    {
QT_MOC_LITERAL(0, 12), // "Dialog_pulse"
QT_MOC_LITERAL(13, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 5), // "index"
QT_MOC_LITERAL(42, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(66, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(96, 4), // "arg1"
QT_MOC_LITERAL(101, 31), // "on_doubleSpinBox_2_valueChanged"
QT_MOC_LITERAL(133, 31), // "on_doubleSpinBox_3_valueChanged"
QT_MOC_LITERAL(165, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(189, 25), // "on_comboBox_textActivated"
QT_MOC_LITERAL(215, 27), // "on_comboBox_2_textActivated"
QT_MOC_LITERAL(243, 27) // "on_comboBox_3_textActivated"

    },
    "Dialog_pulse\0on_comboBox_activated\0\0"
    "index\0on_comboBox_2_activated\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_doubleSpinBox_2_valueChanged\0"
    "on_doubleSpinBox_3_valueChanged\0"
    "on_spinBox_valueChanged\0"
    "on_comboBox_textActivated\0"
    "on_comboBox_2_textActivated\0"
    "on_comboBox_3_textActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_pulse[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       4,    1,   71,    2, 0x08,    3 /* Private */,
       5,    1,   74,    2, 0x08,    5 /* Private */,
       7,    1,   77,    2, 0x08,    7 /* Private */,
       8,    1,   80,    2, 0x08,    9 /* Private */,
       9,    1,   83,    2, 0x08,   11 /* Private */,
      10,    1,   86,    2, 0x08,   13 /* Private */,
      11,    1,   89,    2, 0x08,   15 /* Private */,
      12,    1,   92,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Dialog_pulse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog_pulse *>(_o);
        (void)_t;
        switch (_id) {
        //case 0: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        //case 1: _t->on_comboBox_2_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_doubleSpinBox_2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_doubleSpinBox_3_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_2_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_3_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog_pulse::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog_pulse.offsetsAndSize,
    qt_meta_data_Dialog_pulse,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_pulse_t
, QtPrivate::TypeAndForceComplete<Dialog_pulse, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dialog_pulse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_pulse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_pulse.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog_pulse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
