#-------------------------------------------------
#
# Project created by QtCreator 2016-01-04T08:42:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 06-custom-widgets
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clickcounter.cpp \
    clickablelabel.cpp \
    coolwiddget.cpp \
    countedtextedit.cpp \
    keysfilter.cpp

HEADERS  += mainwindow.h \
    clickcounter.h \
    clickablelabel.h \
    coolwiddget.h \
    countedtextedit.h \
    keysfilter.h

FORMS    += mainwindow.ui \
    clickcounter.ui \
    countedtextedit.ui
