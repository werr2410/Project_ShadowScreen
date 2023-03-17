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
#include <QtCore/QList>
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
    uint offsetsAndSizes[88];
    char stringdata0[13];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[5];
    char stringdata5[36];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[25];
    char stringdata9[5];
    char stringdata10[13];
    char stringdata11[29];
    char stringdata12[9];
    char stringdata13[13];
    char stringdata14[36];
    char stringdata15[9];
    char stringdata16[11];
    char stringdata17[6];
    char stringdata18[5];
    char stringdata19[13];
    char stringdata20[36];
    char stringdata21[9];
    char stringdata22[22];
    char stringdata23[9];
    char stringdata24[9];
    char stringdata25[14];
    char stringdata26[5];
    char stringdata27[7];
    char stringdata28[6];
    char stringdata29[7];
    char stringdata30[5];
    char stringdata31[11];
    char stringdata32[12];
    char stringdata33[12];
    char stringdata34[26];
    char stringdata35[26];
    char stringdata36[30];
    char stringdata37[33];
    char stringdata38[32];
    char stringdata39[30];
    char stringdata40[31];
    char stringdata41[33];
    char stringdata42[31];
    char stringdata43[33];
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
        QT_MOC_LITERAL(105, 11),  // "SendAboutMe"
        QT_MOC_LITERAL(117, 24),  // "ShadowScreen::user::User"
        QT_MOC_LITERAL(142, 4),  // "user"
        QT_MOC_LITERAL(147, 12),  // "SendTelegram"
        QT_MOC_LITERAL(160, 28),  // "ShadowScreen::Data::Telegram"
        QT_MOC_LITERAL(189, 8),  // "telegram"
        QT_MOC_LITERAL(198, 12),  // "SendBankcard"
        QT_MOC_LITERAL(211, 35),  // "QList<ShadowScreen::Data::Ban..."
        QT_MOC_LITERAL(247, 8),  // "bankcard"
        QT_MOC_LITERAL(256, 10),  // "SendReview"
        QT_MOC_LITERAL(267, 5),  // "count"
        QT_MOC_LITERAL(273, 4),  // "mark"
        QT_MOC_LITERAL(278, 12),  // "SendDelivery"
        QT_MOC_LITERAL(291, 35),  // "QList<ShadowScreen::Data::Del..."
        QT_MOC_LITERAL(327, 8),  // "delivery"
        QT_MOC_LITERAL(336, 21),  // "onRegistrationSuccess"
        QT_MOC_LITERAL(358, 8),  // "username"
        QT_MOC_LITERAL(367, 8),  // "password"
        QT_MOC_LITERAL(376, 13),  // "getDetailInfo"
        QT_MOC_LITERAL(390, 4),  // "desc"
        QT_MOC_LITERAL(395, 6),  // "status"
        QT_MOC_LITERAL(402, 5),  // "image"
        QT_MOC_LITERAL(408, 6),  // "isSale"
        QT_MOC_LITERAL(415, 4),  // "type"
        QT_MOC_LITERAL(420, 10),  // "getAboutMe"
        QT_MOC_LITERAL(431, 11),  // "getBankcard"
        QT_MOC_LITERAL(443, 11),  // "getDelivery"
        QT_MOC_LITERAL(455, 25),  // "on_pushButton_CPU_clicked"
        QT_MOC_LITERAL(481, 25),  // "on_pushButton_GPU_clicked"
        QT_MOC_LITERAL(507, 29),  // "on_pushButton_STORAGE_clicked"
        QT_MOC_LITERAL(537, 32),  // "on_pushButton_MEMORYCHIP_clicked"
        QT_MOC_LITERAL(570, 31),  // "on_pushButton_BASEBOARD_clicked"
        QT_MOC_LITERAL(602, 29),  // "on_pushButton_AboutMe_clicked"
        QT_MOC_LITERAL(632, 30),  // "on_pushButton_Telegram_clicked"
        QT_MOC_LITERAL(663, 32),  // "on_pushButton_MyBankcard_clicked"
        QT_MOC_LITERAL(696, 30),  // "on_pushButton_MyReview_clicked"
        QT_MOC_LITERAL(727, 32)   // "on_pushButton_MyDelivery_clicked"
    },
    "ShadowWindow",
    "SendDatainfo",
    "",
    "ShadowScreen::user::Detail*",
    "data",
    "ShadowScreen::computer::DetailInfo*",
    "datainfo",
    "SendAboutMe",
    "ShadowScreen::user::User",
    "user",
    "SendTelegram",
    "ShadowScreen::Data::Telegram",
    "telegram",
    "SendBankcard",
    "QList<ShadowScreen::Data::Bankcard>",
    "bankcard",
    "SendReview",
    "count",
    "mark",
    "SendDelivery",
    "QList<ShadowScreen::Data::Delivery>",
    "delivery",
    "onRegistrationSuccess",
    "username",
    "password",
    "getDetailInfo",
    "desc",
    "status",
    "image",
    "isSale",
    "type",
    "getAboutMe",
    "getBankcard",
    "getDelivery",
    "on_pushButton_CPU_clicked",
    "on_pushButton_GPU_clicked",
    "on_pushButton_STORAGE_clicked",
    "on_pushButton_MEMORYCHIP_clicked",
    "on_pushButton_BASEBOARD_clicked",
    "on_pushButton_AboutMe_clicked",
    "on_pushButton_Telegram_clicked",
    "on_pushButton_MyBankcard_clicked",
    "on_pushButton_MyReview_clicked",
    "on_pushButton_MyDelivery_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ShadowWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  140,    2, 0x06,    1 /* Public */,
       7,    1,  145,    2, 0x06,    4 /* Public */,
      10,    1,  148,    2, 0x06,    6 /* Public */,
      13,    1,  151,    2, 0x06,    8 /* Public */,
      16,    2,  154,    2, 0x06,   10 /* Public */,
      19,    1,  159,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    2,  162,    2, 0x0a,   15 /* Public */,
      25,    5,  167,    2, 0x0a,   18 /* Public */,
      31,    1,  178,    2, 0x0a,   24 /* Public */,
      32,    1,  181,    2, 0x0a,   26 /* Public */,
      33,    1,  184,    2, 0x0a,   28 /* Public */,
      34,    0,  187,    2, 0x08,   30 /* Private */,
      35,    0,  188,    2, 0x08,   31 /* Private */,
      36,    0,  189,    2, 0x08,   32 /* Private */,
      37,    0,  190,    2, 0x08,   33 /* Private */,
      38,    0,  191,    2, 0x08,   34 /* Private */,
      39,    0,  192,    2, 0x08,   35 /* Private */,
      40,    0,  193,    2, 0x08,   36 /* Private */,
      41,    0,  194,    2, 0x08,   37 /* Private */,
      42,    0,  195,    2, 0x08,   38 /* Private */,
      43,    0,  196,    2, 0x08,   39 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QPixmap, QMetaType::Bool, QMetaType::QString,   26,   27,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'SendAboutMe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::user::User, std::false_type>,
        // method 'SendTelegram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::Data::Telegram, std::false_type>,
        // method 'SendBankcard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<ShadowScreen::Data::Bankcard>, std::false_type>,
        // method 'SendReview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'SendDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<ShadowScreen::Data::Delivery>, std::false_type>,
        // method 'onRegistrationSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getDetailInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getAboutMe'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ShadowScreen::user::User, std::false_type>,
        // method 'getBankcard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<ShadowScreen::Data::Bankcard>, std::false_type>,
        // method 'getDelivery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<ShadowScreen::Data::Delivery>, std::false_type>,
        // method 'on_pushButton_CPU_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_GPU_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_STORAGE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MEMORYCHIP_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BASEBOARD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_AboutMe_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Telegram_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MyBankcard_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MyReview_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_MyDelivery_clicked'
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
        case 1: _t->SendAboutMe((*reinterpret_cast< std::add_pointer_t<ShadowScreen::user::User>>(_a[1]))); break;
        case 2: _t->SendTelegram((*reinterpret_cast< std::add_pointer_t<ShadowScreen::Data::Telegram>>(_a[1]))); break;
        case 3: _t->SendBankcard((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Bankcard>>>(_a[1]))); break;
        case 4: _t->SendReview((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 5: _t->SendDelivery((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Delivery>>>(_a[1]))); break;
        case 6: _t->onRegistrationSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->getDetailInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 8: _t->getAboutMe((*reinterpret_cast< std::add_pointer_t<ShadowScreen::user::User>>(_a[1]))); break;
        case 9: _t->getBankcard((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Bankcard>>>(_a[1]))); break;
        case 10: _t->getDelivery((*reinterpret_cast< std::add_pointer_t<QList<ShadowScreen::Data::Delivery>>>(_a[1]))); break;
        case 11: _t->on_pushButton_CPU_clicked(); break;
        case 12: _t->on_pushButton_GPU_clicked(); break;
        case 13: _t->on_pushButton_STORAGE_clicked(); break;
        case 14: _t->on_pushButton_MEMORYCHIP_clicked(); break;
        case 15: _t->on_pushButton_BASEBOARD_clicked(); break;
        case 16: _t->on_pushButton_AboutMe_clicked(); break;
        case 17: _t->on_pushButton_Telegram_clicked(); break;
        case 18: _t->on_pushButton_MyBankcard_clicked(); break;
        case 19: _t->on_pushButton_MyReview_clicked(); break;
        case 20: _t->on_pushButton_MyDelivery_clicked(); break;
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
        {
            using _t = void (ShadowWindow::*)(ShadowScreen::user::User );
            if (_t _q_method = &ShadowWindow::SendAboutMe; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShadowWindow::*)(ShadowScreen::Data::Telegram );
            if (_t _q_method = &ShadowWindow::SendTelegram; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShadowWindow::*)(QVector<ShadowScreen::Data::Bankcard> );
            if (_t _q_method = &ShadowWindow::SendBankcard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShadowWindow::*)(int , float );
            if (_t _q_method = &ShadowWindow::SendReview; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShadowWindow::*)(QList<ShadowScreen::Data::Delivery> );
            if (_t _q_method = &ShadowWindow::SendDelivery; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ShadowWindow::SendDatainfo(ShadowScreen::user::Detail * _t1, ShadowScreen::computer::DetailInfo * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShadowWindow::SendAboutMe(ShadowScreen::user::User _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ShadowWindow::SendTelegram(ShadowScreen::Data::Telegram _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ShadowWindow::SendBankcard(QVector<ShadowScreen::Data::Bankcard> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ShadowWindow::SendReview(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ShadowWindow::SendDelivery(QList<ShadowScreen::Data::Delivery> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
