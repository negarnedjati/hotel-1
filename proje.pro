#-------------------------------------------------
#
# Project created by QtCreator 2014-04-10T01:29:33
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proje
TEMPLATE = app


SOURCES += main.cpp\
        proje.cpp \
    manager.cpp \
    reception.cpp \
    buymanager.cpp \
    pass.cpp

HEADERS  += proje.h \
    manager.h \
    reception.h \
    buymanager.h \
    pass.h

FORMS    += proje.ui \
    manager.ui \
    reception.ui \
    buymanager.ui \
    pass.ui

RESOURCES += \
    saaa.qrc \
    receptionimage.qrc \
    managerimage.qrc \
    buymanagerimage.qrc
