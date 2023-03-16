/****************************************************************************
** Meta object code from reading C++ file 'detailsetwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../visual/Windows/Detail/detailsetwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailsetwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DetailSetWindow_t {
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[5];
    char stringdata5[36];
    char stringdata6[9];
    char stringdata7[27];
    char stringdata8[27];
    char stringdata9[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DetailSetWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DetailSetWindow_t qt_meta_stringdata_DetailSetWindow = {
    {
        QT_MOC_LITERAL(0, 15),  // "DetailSetWindow"
        QT_MOC_LITERAL(16, 11),  // "receiveData"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 31),  // "ShadowScreen::computer::Detail*"
        QT_MOC_LITERAL(61, 4),  // "data"
        QT_MOC_LITERAL(66, 35),  // "ShadowScreen::computer::Detai..."
        QT_MOC_LITERAL(102, 8),  // "datainfo"
        QT_MOC_LITERAL(111, 26),  // "on_pushButton_File_clicked"
        QT_MOC_LITERAL(138, 26),  // "on_pushButton_Save_clicked"
        QT_MOC_LITERAL(165, 27)   // "on_radioButton_Sale_clicked"
    },
    "DetailSetWindow",
    "receiveData",
    "",
    "ShadowScreen::computer::Detail*",
    "data",
    "ShadowScreen::computer::DetailInfo*",
    "datainfo",
    "on_pushButton_File_clicked",
    "on_pushButton_Save_clicked",
    "on_radioButton_Sale_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DetailSetWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x0a,    1 /* Public */,
       7,    0,   43,    2, 0x08,    4 /* Private */,
       8,    0,   44,    2, 0x08,    5 /* Private */,
       9,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DetailSetWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DetailSetWindow.offsetsAndSizes,
    qt_meta_data_DetailSetWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DetailSetWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DetailSetWindow, std::true_type>,
        // method 'receiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::computer::Detail *, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::computer::DetailInfo *, std::false_type>,
        // method 'on_pushButton_File_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_radioButton_Sale_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DetailSetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DetailSetWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->receiveData((*reinterpret_cast< std::add_pointer_t<ShadowScreen::computer::Detail*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ShadowScreen::computer::DetailInfo*>>(_a[2]))); break;
        case 1: _t->on_pushButton_File_clicked(); break;
        case 2: _t->on_pushButton_Save_clicked(); break;
        case 3: _t->on_radioButton_Sale_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *DetailSetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DetailSetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DetailSetWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DetailSetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
