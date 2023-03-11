QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Data/adress.cpp \
    Data/bankcard.cpp \
    Data/review.cpp \
    Data/telegram.cpp \
    Windows/Other/registrationwindow.cpp \
    Windows/Other/telegramwindow.cpp \
    Windows/adresswindow.cpp \
    Windows/bankcardwindow.cpp \
    Windows/reviewwindow.cpp \
    main.cpp \
    shadowwindow.cpp

HEADERS += \
    Data/adress.h \
    Data/bankcard.h \
    Data/review.h \
    Data/telegram.h \
    Windows/Other/registrationwindow.h \
    Windows/Other/telegramwindow.h \
    Windows/adresswindow.h \
    Windows/bankcardwindow.h \
    Windows/reviewwindow.h \
    shadowwindow.h

FORMS += \
    Windows/Other/registrationwindow.ui \
    Windows/Other/telegramwindow.ui \
    Windows/adresswindow.ui \
    Windows/bankcardwindow.ui \
    Windows/reviewwindow.ui \
    shadowwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
