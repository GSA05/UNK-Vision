#-------------------------------------------------
#
# Project created by QtCreator 2015-11-06T11:19:30
#
#-------------------------------------------------

QT       += sql core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UNK-Vision
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    abstract_shape.cpp \
    isotope.cpp \
    abstract_model.cpp \
    material.cpp \
    unk.cpp

HEADERS  += mainwindow.h \
    abstract_shape.h \
    isotope.h \
    abstract_model.h \
    material.h \
    initdb.h \
    unk.h

FORMS    += mainwindow.ui \
    unk.ui
