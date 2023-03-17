/****************************************************************************
** Meta object code from reading C++ file 'deliverywindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/Windows/deliverywindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deliverywindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DeliveryWindow_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[7];
    char stringdata5[13];
    char stringdata6[29];
    char stringdata7[9];
    char stringdata8[10];
    char stringdata9[12];
    char stringdata10[26];
    char stringdata11[29];
    char stringdata12[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DeliveryWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DeliveryWindow_t qt_meta_stringdata_DeliveryWindow = {
    {
        QT_MOC_LITERAL(0, 14),  // "DeliveryWindow"
        QT_MOC_LITERAL(15, 10),  // "SendAdress"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 26),  // "ShadowScreen::Data::Adress"
        QT_MOC_LITERAL(54, 6),  // "adress"
        QT_MOC_LITERAL(61, 12),  // "SendDelivery"
        QT_MOC_LITERAL(74, 28),  // "ShadowScreen::Data::Delivery"
        QT_MOC_LITERAL(103, 8),  // "delivery"
        QT_MOC_LITERAL(112, 9),  // "getAdress"
        QT_MOC_LITERAL(122, 11),  // "getDelivery"
        QT_MOC_LITERAL(134, 25),  // "on_pushButton_add_clicked"
        QT_MOC_LITERAL(160, 28),  // "on_pushButton_cancel_clicked"
        QT_MOC_LITERAL(189, 28)   // "on_pushButton_adress_clicked"
    },
    "DeliveryWindow",
    "SendAdress",
    "",
    "ShadowScreen::Data::Adress",
    "adress",
    "SendDelivery",
    "ShadowScreen::Data::Delivery",
    "delivery",
    "getAdress",
    "getDelivery",
    "on_pushButton_add_clicked",
    "on_pushButton_cancel_clicked",
    "on_pushButton_adress_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DeliveryWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   62,    2, 0x0a,    5 /* Public */,
       9,    1,   65,    2, 0x0a,    7 /* Public */,
      10,    0,   68,    2, 0x08,    9 /* Private */,
      11,    0,   69,    2, 0x08,   10 /* Private */,
      12,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeliveryWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DeliveryWindow.offsetsAndSizes,
    qt_meta_data_DeliveryWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DeliveryWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeliveryWindow, std::true_type>,
        // method 'SendAdress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Adress, std::false_type>,
        // method 'SendDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Delivery, std::false_type>,
        // method 'getAdress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Adress, std::false_type>,
        // method 'getDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Delivery, std::false_type>,
        // method 'on_pushButton_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_cancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_adress_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DeliveryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeliveryWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendAdress((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Adress>>(_a[1]))); break;
        case 1: _t->SendDelivery((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Delivery>>(_a[1]))); break;
        case 2: _t->getAdress((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Adress>>(_a[1]))); break;
        case 3: _t->getDelivery((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Delivery>>(_a[1]))); break;
        case 4: _t->on_pushButton_add_clicked(); break;
        case 5: _t->on_pushButton_cancel_clicked(); break;
        case 6: _t->on_pushButton_adress_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeliveryWindow::*)(ShadowScreen::Data::Adress );
            if (_t _q_method = &DeliveryWindow::SendAdress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeliveryWindow::*)(ShadowScreen::Data::Delivery );
            if (_t _q_method = &DeliveryWindow::SendDelivery; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *DeliveryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeliveryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeliveryWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DeliveryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DeliveryWindow::SendAdress(ShadowScreen::Data::Adress _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeliveryWindow::SendDelivery(ShadowScreen::Data::Delivery _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
