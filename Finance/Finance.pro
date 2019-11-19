TEMPLATE = app
TARGET = Finance

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp \
    window.cpp \
    verticalbox.cpp \
    buttons.cpp \
    mainwindow.cpp

HEADERS += \
    window.h \
    verticalbox.h \
    buttons.h \
    mainwindow.h
