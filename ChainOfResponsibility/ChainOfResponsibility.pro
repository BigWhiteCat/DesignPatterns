TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Handler.cpp \
    Manager.cpp \
    Director.cpp \
    CEO.cpp

HEADERS += \
    Handler.h \
    Manager.h \
    Director.h \
    CEO.h
