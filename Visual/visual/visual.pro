QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Chating/chat.cpp \
    Chating/message.cpp \
    Computer/baseboard.cpp \
    Computer/computer.cpp \
    Computer/cpu.cpp \
    Computer/detail.cpp \
    Computer/detailinfo.cpp \
    Computer/gpu.cpp \
    Computer/memorychip.cpp \
    Computer/storage.cpp \
    Data/adress.cpp \
    Data/bankcard.cpp \
    Data/delivery.cpp \
    Data/review.cpp \
    Data/telegram.cpp \
    Database/dbobj.cpp \
    Database/mssql.cpp \
    User/user.cpp \
    Windows/Other/registrationwindow.cpp \
    Windows/Other/telegramwindow.cpp \
    Windows/User/mydeliverywindow.cpp \
    Windows/adresswindow.cpp \
    Windows/bankcardwindow.cpp \
    Windows/deliverywindow.cpp \
    Windows/reviewwindow.cpp \
    main.cpp \
    shadowwindow.cpp

HEADERS += \
    Chating/chat.h \
    Chating/message.h \
    Computer/baseboard.h \
    Computer/computer.h \
    Computer/cpu.h \
    Computer/detail.h \
    Computer/detailinfo.h \
    Computer/gpu.h \
    Computer/memorychip.h \
    Computer/storage.h \
    Data/adress.h \
    Data/bankcard.h \
    Data/delivery.h \
    Data/review.h \
    Data/telegram.h \
    Database/dbobj.h \
    Database/mssql.h \
    Exception/exceptions.h \
    User/user.h \
    Windows/Other/registrationwindow.h \
    Windows/Other/telegramwindow.h \
    Windows/User/mydeliverywindow.h \
    Windows/adresswindow.h \
    Windows/bankcardwindow.h \
    Windows/deliverywindow.h \
    Windows/reviewwindow.h \
    shadowwindow.h

FORMS += \
    Windows/Other/registrationwindow.ui \
    Windows/Other/telegramwindow.ui \
    Windows/User/mydeliverywindow.ui \
    Windows/adresswindow.ui \
    Windows/bankcardwindow.ui \
    Windows/deliverywindow.ui \
    Windows/reviewwindow.ui \
    shadowwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
