#-------------------------------------------------
#
# Project created by QtCreator 2010-04-02T11:52:47
#
#-------------------------------------------------

QT       += network script scripttools webkit xml xmlpatterns

TARGET = QSoapExplorer
TEMPLATE = app

include(./lib/qtsoap/src/qtsoap.pri)

SOURCES += main.cpp\
        qsoapexplorer.cpp

HEADERS  += qsoapexplorer.h

FORMS    += qsoapexplorer.ui
