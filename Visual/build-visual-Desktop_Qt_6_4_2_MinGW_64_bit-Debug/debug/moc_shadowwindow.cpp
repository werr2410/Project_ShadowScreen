/****************************************************************************
** Meta object code from reading C++ file 'shadowwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/shadowwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shadowwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ShadowWindow_t {
    uint offsetsAndSizes[30];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[5];
    char stringdata5[36];
    char stringdata6[9];
    char stringdata7[22];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[26];
    char stringdata11[26];
    char stringdata12[30];
    char stringdata13[33];
    char stringdata14[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ShadowWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ShadowWindow_t qt_meta_stringdata_ShadowWindow = {
    {
        QT_MOC_LITERAL(0, 12),  // "ShadowWindow"
        QT_MOC_LITERAL(13, 12),  // "SendDatainfo"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 27),  // "ShadowScreen::user::Detail*"
        QT_MOC_LITERAL(55, 4),  // "data"
        QT_MOC_LITERAL(60, 35),  // "ShadowScreen::computer::Detai..."
        QT_MOC_LITERAL(96, 8),  // "datainfo"
        QT_MOC_LITERAL(105, 21),  // "onRegistrationSuccess"
        QT_MOC_LITERAL(127, 8),  // "username"
        QT_MOC_LITERAL(136, 8),  // "password"
        QT_MOC_LITERAL(145, 25),  // "on_pushButton_CPU_clicked"
        QT_MOC_LITERAL(171, 25),  // "on_pushButton_GPU_clicked"
        QT_MOC_LITERAL(197, 29),  // "on_pushButton_STORAGE_clicked"
        QT_MOC_LITERAL(227, 32),  // "on_pushButton_MEMORYCHIP_clicked"
        QT_MOC_LITERAL(260, 31)   // "on_pushButton_BASEBOARD_clicked"
    },
    "ShadowWindow",
    "SendDatainfo",
    "",
    "ShadowScreen::user::Detail*",
    "data",
    "ShadowScreen::computer::DetailInfo*",
    "datainfo",
    "onRegistrationSuccess",
    "username",
    "password",
    "on_pushButton_CPU_clicked",
    "on_pushButton_GPU_clicked",
    "on_pushButton_STORAGE_clicked",
    "on_pushButton_MEMORYCHIP_clicked",
    "on_pushButton_BASEBOARD_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ShadowWindow[] = {

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
       1,    2,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   61,    2, 0x0a,    4 /* Public */,
      10,    0,   66,    2, 0x08,    7 /* Private */,
      11,    0,   67,    2, 0x08,    8 /* Private */,
      12,    0,   68,    2, 0x08,    9 /* Private */,
      13,    0,   69,    2, 0x08,   10 /* Private */,
      14,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShadowWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ShadowWindow.offsetsAndSizes,
    qt_meta_data_ShadowWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ShadowWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShadowWindow, std::true_type>,
        // method 'SendDatainfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::user::Detail *, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::computer::DetailInfo *, std::false_type>,
        // method 'onRegistrationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_CPU_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_GPU_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_STORAGE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MEMORYCHIP_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BASEBOARD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ShadowWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShadowWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendDatainfo((*reinterpret_cast< std::add_pointer_t<ShadowScreen::user::Detail*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ShadowScreen::computer::DetailInfo*>>(_a[2]))); break;
        case 1: _t->onRegistrationSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->on_pushButton_CPU_clicked(); break;
        case 3: _t->on_pushButton_GPU_clicked(); break;
        case 4: _t->on_pushButton_STORAGE_clicked(); break;
        case 5: _t->on_pushButton_MEMORYCHIP_clicked(); break;
        case 6: _t->on_pushButton_BASEBOARD_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShadowWindow::*)(ShadowScreen::user::Detail * , ShadowScreen::computer::DetailInfo * );
            if (_t _q_method = &ShadowWindow::SendDatainfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ShadowWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShadowWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShadowWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ShadowWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ShadowWindow::SendDatainfo(ShadowScreen::user::Detail * _t1, ShadowScreen::computer::DetailInfo * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
