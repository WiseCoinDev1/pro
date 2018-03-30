/****************************************************************************
** Meta object code from reading C++ file 'darksendpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/darksendpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'darksendpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DarksendPage_t {
    QByteArrayData data[17];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DarksendPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DarksendPage_t qt_meta_stringdata_DarksendPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DarksendPage"
QT_MOC_LITERAL(1, 13, 14), // "darkSendStatus"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "setBalance"
QT_MOC_LITERAL(4, 40, 7), // "CAmount"
QT_MOC_LITERAL(5, 48, 7), // "balance"
QT_MOC_LITERAL(6, 56, 5), // "stake"
QT_MOC_LITERAL(7, 62, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(8, 81, 15), // "immatureBalance"
QT_MOC_LITERAL(9, 97, 17), // "anonymizedBalance"
QT_MOC_LITERAL(10, 115, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(11, 132, 14), // "watchOnlyStake"
QT_MOC_LITERAL(12, 147, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(13, 166, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(14, 187, 14), // "toggleDarksend"
QT_MOC_LITERAL(15, 202, 12), // "darksendAuto"
QT_MOC_LITERAL(16, 215, 13) // "darksendReset"

    },
    "DarksendPage\0darkSendStatus\0\0setBalance\0"
    "CAmount\0balance\0stake\0unconfirmedBalance\0"
    "immatureBalance\0anonymizedBalance\0"
    "watchOnlyBalance\0watchOnlyStake\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "toggleDarksend\0darksendAuto\0darksendReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DarksendPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    9,   40,    2, 0x0a /* Public */,
      14,    0,   59,    2, 0x08 /* Private */,
      15,    0,   60,    2, 0x08 /* Private */,
      16,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DarksendPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DarksendPage *_t = static_cast<DarksendPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->darkSendStatus(); break;
        case 1: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 2: _t->toggleDarksend(); break;
        case 3: _t->darksendAuto(); break;
        case 4: _t->darksendReset(); break;
        default: ;
        }
    }
}

const QMetaObject DarksendPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DarksendPage.data,
      qt_meta_data_DarksendPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DarksendPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DarksendPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DarksendPage.stringdata0))
        return static_cast<void*>(const_cast< DarksendPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int DarksendPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
