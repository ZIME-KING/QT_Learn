/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../untitled4/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    const uint offsetsAndSize[28];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 6), // "Dialog"
QT_MOC_LITERAL(7, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 5), // "index"
QT_MOC_LITERAL(36, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(60, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(90, 4), // "arg1"
QT_MOC_LITERAL(95, 31), // "on_doubleSpinBox_2_valueChanged"
QT_MOC_LITERAL(127, 31), // "on_doubleSpinBox_3_valueChanged"
QT_MOC_LITERAL(159, 31), // "on_doubleSpinBox_4_valueChanged"
QT_MOC_LITERAL(191, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(215, 25), // "on_comboBox_textActivated"
QT_MOC_LITERAL(241, 27), // "on_comboBox_2_textActivated"
QT_MOC_LITERAL(269, 27) // "on_comboBox_3_textActivated"

    },
    "Dialog\0on_comboBox_activated\0\0index\0"
    "on_comboBox_2_activated\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_doubleSpinBox_2_valueChanged\0"
    "on_doubleSpinBox_3_valueChanged\0"
    "on_doubleSpinBox_4_valueChanged\0"
    "on_spinBox_valueChanged\0"
    "on_comboBox_textActivated\0"
    "on_comboBox_2_textActivated\0"
    "on_comboBox_3_textActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    1 /* Private */,
       4,    1,   77,    2, 0x08,    3 /* Private */,
       5,    1,   80,    2, 0x08,    5 /* Private */,
       7,    1,   83,    2, 0x08,    7 /* Private */,
       8,    1,   86,    2, 0x08,    9 /* Private */,
       9,    1,   89,    2, 0x08,   11 /* Private */,
      10,    1,   92,    2, 0x08,   13 /* Private */,
      11,    1,   95,    2, 0x08,   15 /* Private */,
      12,    1,   98,    2, 0x08,   17 /* Private */,
      13,    1,  101,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        //case 0: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        //case 1: _t->on_comboBox_2_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_doubleSpinBox_2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_doubleSpinBox_3_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_doubleSpinBox_4_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_2_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_3_textActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.offsetsAndSize,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_t
, QtPrivate::TypeAndForceComplete<Dialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
