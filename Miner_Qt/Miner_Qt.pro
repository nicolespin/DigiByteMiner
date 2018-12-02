#-------------------------------------------------
#
# Project created by QtCreator 2018-12-01T21:11:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Miner_Qt
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        controlpanel.cpp \
    controlpanel.cpp \
    main.cpp \
    oneminer.cpp \
    Core/oneminer.cpp \
    controlpanel.cpp \
    main.cpp \
    Core/icoin.cpp \
    Core/Interfaces/icoin.cpp \
    Core/oneminer.cpp \
    Core/Interfaces/icoinconfigurer.cpp \
    Core/Interfaces/igpudata.cpp \
    Core/Interfaces/ihashalgorithm.cpp

HEADERS += \
        controlpanel.h \
    controlpanel.h \
    oneminer.h \
    Core/oneminer.h \
    controlpanel.h \
    Core/icoin.h \
    Core/Interfaces/icoin.h \
    Core/oneminer.h \
    Core/Interfaces/icoinconfigurer.h \
    Core/Interfaces/igpudata.h \
    Core/Interfaces/ihashalgorithm.h

FORMS += \
        controlpanel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
