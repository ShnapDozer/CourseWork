/****************************************************************************
** Meta object code from reading C++ file 'new_db.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Coursework/new_db.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_db.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_New_DB_t {
    const uint offsetsAndSize[22];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_New_DB_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_New_DB_t qt_meta_stringdata_New_DB = {
    {
QT_MOC_LITERAL(0, 6), // "New_DB"
QT_MOC_LITERAL(7, 15), // "signal_NewDB_Ok"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 4), // "Name"
QT_MOC_LITERAL(29, 7), // "queryDB"
QT_MOC_LITERAL(37, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(61, 4), // "arg1"
QT_MOC_LITERAL(66, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(90, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(116, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(138, 30) // "on_comboBox_currentTextChanged"

    },
    "New_DB\0signal_NewDB_Ok\0\0Name\0queryDB\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_3_clicked\0"
    "on_lineEdit_2_textChanged\0"
    "on_pushButton_clicked\0"
    "on_comboBox_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_New_DB[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   55,    2, 0x08,    4 /* Private */,
       7,    0,   58,    2, 0x08,    6 /* Private */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
       9,    0,   62,    2, 0x08,    9 /* Private */,
      10,    1,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void New_DB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<New_DB *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_NewDB_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (New_DB::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&New_DB::signal_NewDB_Ok)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject New_DB::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_New_DB.offsetsAndSize,
    qt_meta_data_New_DB,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_New_DB_t
, QtPrivate::TypeAndForceComplete<New_DB, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *New_DB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *New_DB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_New_DB.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int New_DB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void New_DB::signal_NewDB_Ok(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
