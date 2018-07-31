TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    mazebuilder.cpp \
    mazegame.cpp \
    standardmazebuilder.cpp \
    maze.cpp \
    room.cpp \
    side.cpp \
    wall.cpp \
    door.cpp \
    countingmazebuilder.cpp

HEADERS += \
    mazebuilder.h \
    mazegame.h \
    standardmazebuilder.h \
    maze.h \
    room.h \
    side.h \
    wall.h \
    door.h \
    countingmazebuilder.h
