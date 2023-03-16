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
    uint offsetsAndSizes[32];
    char stringdata0[16];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[12];
    char stringdata9[32];
    char stringdata10[5];
    char stringdata11[36];
    char stringdata12[9];
    char stringdata13[27];
    char stringdata14[27];
    char stringdata15[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DetailSetWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DetailSetWindow_t qt_meta_stringdata_DetailSetWindow = {
    {
        QT_MOC_LITERAL(0, 15),  // "DetailSetWindow"
        QT_MOC_LITERAL(16, 14),  // "sendDetailInfo"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 4),  // "desc"
        QT_MOC_LITERAL(37, 6),  // "status"
        QT_MOC_LITERAL(44, 5),  // "image"
        QT_MOC_LITERAL(50, 6),  // "isSale"
        QT_MOC_LITERAL(57, 4),  // "type"
        QT_MOC_LITERAL(62, 11),  // "receiveData"
        QT_MOC_LITERAL(74, 31),  // "ShadowScreen::computer::Detail*"
        QT_MOC_LITERAL(106, 4),  // "data"
        QT_MOC_LITERAL(111, 35),  // "ShadowScreen::computer::Detai..."
        QT_MOC_LITERAL(147, 8),  // "datainfo"
        QT_MOC_LITERAL(156, 26),  // "on_pushButton_File_clicked"
        QT_MOC_LITERAL(183, 26),  // "on_pushButton_Save_clicked"
        QT_MOC_LITERAL(210, 27)   // "on_radioButton_Sale_clicked"
    },
    "DetailSetWindow",
    "sendDetailInfo",
    "",
    "desc",
    "status",
    "image",
    "isSale",
    "type",
    "receiveData",
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
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   55,    2, 0x0a,    7 /* Public */,
      13,    0,   60,    2, 0x08,   10 /* Private */,
      14,    0,   61,    2, 0x08,   11 /* Private */,
      15,    0,   62,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, QMetaType::Bool, QMetaType::QString,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
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
        // method 'sendDetailInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
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
        case 0: _t->sendDetailInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 1: _t->receiveData((*reinterpret_cast< std::add_pointer_t<ShadowScreen::computer::Detail*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ShadowScreen::computer::DetailInfo*>>(_a[2]))); break;
        case 2: _t->on_pushButton_File_clicked(); break;
        case 3: _t->on_pushButton_Save_clicked(); break;
        case 4: _t->on_radioButton_Sale_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DetailSetWindow::*)(QString , QString , QPixmap , bool , QString );
            if (_t _q_method = &DetailSetWindow::sendDetailInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
void DetailSetWindow::sendDetailInfo(QString _t1, QString _t2, QPixmap _t3, bool _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
