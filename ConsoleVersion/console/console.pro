QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        adress.cpp \
        bankcard.cpp \
        baseboard.cpp \
        compture.cpp \
        cpu.cpp \
        delivery.cpp \
        detail.cpp \
        main.cpp \
        memorychip.cpp \
        password.cpp \
        reviews.cpp \
        storage.cpp \
        transaction.cpp \
        videocard.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    adress.h \
    bankcard.h \
    baseboard.h \
    compture.h \
    cpu.h \
    delivery.h \
    detail.h \
    memorychip.h \
    password.h \
    reviews.h \
    storage.h \
    transaction.h \
    videocard.h

DISTFILES += \
    Data/Текстовый документ.txt
