/****************************************************************************
** Meta object code from reading C++ file 'main_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Coursework/main_w.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Main_W_t {
    const uint offsetsAndSize[40];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Main_W_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Main_W_t qt_meta_stringdata_Main_W = {
    {
QT_MOC_LITERAL(0, 6), // "Main_W"
QT_MOC_LITERAL(7, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 11), // "QModelIndex"
QT_MOC_LITERAL(41, 5), // "index"
QT_MOC_LITERAL(47, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(71, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(93, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(117, 13), // "slot_Choose_W"
QT_MOC_LITERAL(131, 5), // "isNew"
QT_MOC_LITERAL(137, 14), // "slot_OpenDB_Ok"
QT_MOC_LITERAL(152, 9), // "File_Path"
QT_MOC_LITERAL(162, 9), // "File_Type"
QT_MOC_LITERAL(172, 13), // "slot_NewDB_Ok"
QT_MOC_LITERAL(186, 4), // "Name"
QT_MOC_LITERAL(191, 7), // "queryDB"
QT_MOC_LITERAL(199, 19), // "on_listView_clicked"
QT_MOC_LITERAL(219, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(243, 4), // "arg1"
QT_MOC_LITERAL(248, 23) // "on_pushButton_3_clicked"

    },
    "Main_W\0on_tableView_clicked\0\0QModelIndex\0"
    "index\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_actionOpen_triggered\0"
    "slot_Choose_W\0isNew\0slot_OpenDB_Ok\0"
    "File_Path\0File_Type\0slot_NewDB_Ok\0"
    "Name\0queryDB\0on_listView_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_W[] = {

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
       5,    0,   77,    2, 0x08,    3 /* Private */,
       6,    0,   78,    2, 0x08,    4 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    1,   80,    2, 0x08,    6 /* Private */,
      10,    2,   83,    2, 0x08,    8 /* Private */,
      13,    2,   88,    2, 0x08,   11 /* Private */,
      16,    1,   93,    2, 0x08,   14 /* Private */,
      17,    1,   96,    2, 0x08,   16 /* Private */,
      19,    0,   99,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void Main_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Main_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_actionOpen_triggered(); break;
        case 4: _t->slot_Choose_W((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_OpenDB_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->slot_NewDB_Ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->on_listView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Main_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Main_W.offsetsAndSize,
    qt_meta_data_Main_W,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Main_W_t
, QtPrivate::TypeAndForceComplete<Main_W, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Main_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Main_W.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Main_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
