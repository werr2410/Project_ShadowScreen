/****************************************************************************
** Meta object code from reading C++ file 'registrationwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/Windows/Other/registrationwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registrationwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RegistrationWindow_t {
    uint offsetsAndSizes[18];
    char stringdata0[19];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[38];
    char stringdata6[31];
    char stringdata7[39];
    char stringdata8[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RegistrationWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RegistrationWindow_t qt_meta_stringdata_RegistrationWindow = {
    {
        QT_MOC_LITERAL(0, 18),  // "RegistrationWindow"
        QT_MOC_LITERAL(19, 19),  // "registrationSuccess"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 8),  // "username"
        QT_MOC_LITERAL(49, 8),  // "password"
        QT_MOC_LITERAL(58, 37),  // "on_pushButton_do_Registration..."
        QT_MOC_LITERAL(96, 30),  // "on_pushButton_do_Login_clicked"
        QT_MOC_LITERAL(127, 38),  // "on_radioButton_withoutpasswor..."
        QT_MOC_LITERAL(166, 38)   // "on_radioButton_Withoutusernam..."
    },
    "RegistrationWindow",
    "registrationSuccess",
    "",
    "username",
    "password",
    "on_pushButton_do_Registration_clicked",
    "on_pushButton_do_Login_clicked",
    "on_radioButton_withoutpassword_clicked",
    "on_radioButton_Withoutusername_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RegistrationWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   49,    2, 0x08,    4 /* Private */,
       6,    0,   50,    2, 0x08,    5 /* Private */,
       7,    0,   51,    2, 0x08,    6 /* Private */,
       8,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RegistrationWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RegistrationWindow.offsetsAndSizes,
    qt_meta_data_RegistrationWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RegistrationWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RegistrationWindow, std::true_type>,
        // method 'registrationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_do_Registration_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_do_Login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_withoutpassword_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_Withoutusername_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RegistrationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegistrationWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->registrationSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->on_pushButton_do_Registration_clicked(); break;
        case 2: _t->on_pushButton_do_Login_clicked(); break;
        case 3: _t->on_radioButton_withoutpassword_clicked(); break;
        case 4: _t->on_radioButton_Withoutusername_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegistrationWindow::*)(QString , QString );
            if (_t _q_method = &RegistrationWindow::registrationSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *RegistrationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistrationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegistrationWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RegistrationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RegistrationWindow::registrationSuccess(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
