/****************************************************************************
** Meta object code from reading C++ file 'mybankcardwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/Windows/User/mybankcardwindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mybankcardwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MyBankcardWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[17];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[36];
    char stringdata4[9];
    char stringdata5[12];
    char stringdata6[29];
    char stringdata7[10];
    char stringdata8[29];
    char stringdata9[28];
    char stringdata10[28];
    char stringdata11[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MyBankcardWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MyBankcardWindow_t qt_meta_stringdata_MyBankcardWindow = {
    {
        QT_MOC_LITERAL(0, 16),  // "MyBankcardWindow"
        QT_MOC_LITERAL(17, 18),  // "sendToMainBankcard"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 35),  // "QList<ShadowScreen::Data::Ban..."
        QT_MOC_LITERAL(73, 8),  // "bankcard"
        QT_MOC_LITERAL(82, 11),  // "getBankcard"
        QT_MOC_LITERAL(94, 28),  // "ShadowScreen::Data::Bankcard"
        QT_MOC_LITERAL(123, 9),  // "getVector"
        QT_MOC_LITERAL(133, 28),  // "on_pushButton_delete_clicked"
        QT_MOC_LITERAL(162, 27),  // "on_pushButton_Order_clicked"
        QT_MOC_LITERAL(190, 27),  // "on_pushButton_close_clicked"
        QT_MOC_LITERAL(218, 25)   // "on_pushButton_add_clicked"
    },
    "MyBankcardWindow",
    "sendToMainBankcard",
    "",
    "QList<ShadowScreen::Data::Bankcard>",
    "bankcard",
    "getBankcard",
    "ShadowScreen::Data::Bankcard",
    "getVector",
    "on_pushButton_delete_clicked",
    "on_pushButton_Order_clicked",
    "on_pushButton_close_clicked",
    "on_pushButton_add_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MyBankcardWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x0a,    3 /* Public */,
       7,    1,   62,    2, 0x0a,    5 /* Public */,
       8,    0,   65,    2, 0x0a,    7 /* Public */,
       9,    0,   66,    2, 0x0a,    8 /* Public */,
      10,    0,   67,    2, 0x0a,    9 /* Public */,
      11,    0,   68,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyBankcardWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MyBankcardWindow.offsetsAndSizes,
    qt_meta_data_MyBankcardWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MyBankcardWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyBankcardWindow, std::true_type>,
        // method 'sendToMainBankcard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<ShadowScreen::Data::Bankcard>, std::false_type>,
        // method 'getBankcard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Bankcard, std::false_type>,
        // method 'getVector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<ShadowScreen::Data::Bankcard>, std::false_type>,
        // method 'on_pushButton_delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Order_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MyBankcardWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyBankcardWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendToMainBankcard((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Bankcard>>>(_a[1]))); break;
        case 1: _t->getBankcard((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Bankcard>>(_a[1]))); break;
        case 2: _t->getVector((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Bankcard>>>(_a[1]))); break;
        case 3: _t->on_pushButton_delete_clicked(); break;
        case 4: _t->on_pushButton_Order_clicked(); break;
        case 5: _t->on_pushButton_close_clicked(); break;
        case 6: _t->on_pushButton_add_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyBankcardWindow::*)(QVector<ShadowScreen::Data::Bankcard> );
            if (_t _q_method = &MyBankcardWindow::sendToMainBankcard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MyBankcardWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyBankcardWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyBankcardWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MyBankcardWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyBankcardWindow::sendToMainBankcard(QVector<ShadowScreen::Data::Bankcard> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
