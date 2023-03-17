/****************************************************************************
** Meta object code from reading C++ file 'mydeliverywindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/Windows/User/mydeliverywindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mydeliverywindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MyDeliveryWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[36];
    char stringdata4[9];
    char stringdata5[12];
    char stringdata6[29];
    char stringdata7[16];
    char stringdata8[12];
    char stringdata9[26];
    char stringdata10[28];
    char stringdata11[29];
    char stringdata12[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MyDeliveryWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MyDeliveryWindow_t qt_meta_stringdata_MyDeliveryWindow = {
    {
        QT_MOC_LITERAL(0, 16),  // "MyDeliveryWindow"
        QT_MOC_LITERAL(17, 15),  // "setDeliveryList"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 35),  // "QList<ShadowScreen::Data::Del..."
        QT_MOC_LITERAL(70, 8),  // "delivery"
        QT_MOC_LITERAL(79, 11),  // "setDelivery"
        QT_MOC_LITERAL(91, 28),  // "ShadowScreen::Data::Delivery"
        QT_MOC_LITERAL(120, 15),  // "getDeliveryList"
        QT_MOC_LITERAL(136, 11),  // "getDelivery"
        QT_MOC_LITERAL(148, 25),  // "on_pushButton_Add_clicked"
        QT_MOC_LITERAL(174, 27),  // "on_pushButton_close_clicked"
        QT_MOC_LITERAL(202, 28),  // "on_pushButton_Delete_clicked"
        QT_MOC_LITERAL(231, 27)   // "on_pushButton_Add_2_clicked"
    },
    "MyDeliveryWindow",
    "setDeliveryList",
    "",
    "QList<ShadowScreen::Data::Delivery>",
    "delivery",
    "setDelivery",
    "ShadowScreen::Data::Delivery",
    "getDeliveryList",
    "getDelivery",
    "on_pushButton_Add_clicked",
    "on_pushButton_close_clicked",
    "on_pushButton_Delete_clicked",
    "on_pushButton_Add_2_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MyDeliveryWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    1,   65,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x0a,    5 /* Public */,
       8,    1,   71,    2, 0x0a,    7 /* Public */,
       9,    0,   74,    2, 0x08,    9 /* Private */,
      10,    0,   75,    2, 0x08,   10 /* Private */,
      11,    0,   76,    2, 0x08,   11 /* Private */,
      12,    0,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyDeliveryWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MyDeliveryWindow.offsetsAndSizes,
    qt_meta_data_MyDeliveryWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MyDeliveryWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyDeliveryWindow, std::true_type>,
        // method 'setDeliveryList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<ShadowScreen::Data::Delivery>, std::false_type>,
        // method 'setDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Delivery, std::false_type>,
        // method 'getDeliveryList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<ShadowScreen::Data::Delivery>, std::false_type>,
        // method 'getDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Delivery, std::false_type>,
        // method 'on_pushButton_Add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_close_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Add_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MyDeliveryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyDeliveryWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDeliveryList((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Delivery>>>(_a[1]))); break;
        case 1: _t->setDelivery((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Delivery>>(_a[1]))); break;
        case 2: _t->getDeliveryList((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Delivery>>>(_a[1]))); break;
        case 3: _t->getDelivery((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Delivery>>(_a[1]))); break;
        case 4: _t->on_pushButton_Add_clicked(); break;
        case 5: _t->on_pushButton_close_clicked(); break;
        case 6: _t->on_pushButton_Delete_clicked(); break;
        case 7: _t->on_pushButton_Add_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyDeliveryWindow::*)(QList<ShadowScreen::Data::Delivery> );
            if (_t _q_method = &MyDeliveryWindow::setDeliveryList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyDeliveryWindow::*)(ShadowScreen::Data::Delivery );
            if (_t _q_method = &MyDeliveryWindow::setDelivery; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MyDeliveryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDeliveryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyDeliveryWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MyDeliveryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MyDeliveryWindow::setDeliveryList(QList<ShadowScreen::Data::Delivery> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyDeliveryWindow::setDelivery(ShadowScreen::Data::Delivery _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
