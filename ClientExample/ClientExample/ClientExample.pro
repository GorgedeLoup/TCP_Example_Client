#-------------------------------------------------
#
# Project created by QtCreator 2015-08-20T20:40:38
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClientExample
TEMPLATE = app

INCLUDEPATH += ../lib\
               ../lib/Client

LIBS += ../bin/Client.dll

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
