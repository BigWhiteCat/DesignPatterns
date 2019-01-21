TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Command.cpp \
    Light.cpp \
    FlipUpCommand.cpp \
    FlipDownCommand.cpp \
    Switch.cpp

HEADERS += \
    Command.h \
    Light.h \
    FlipUpCommand.h \
    FlipDownCommand.h \
    Switch.h
