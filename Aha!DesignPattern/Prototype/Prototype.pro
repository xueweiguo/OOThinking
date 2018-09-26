TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    mapsite.cpp \
    door.cpp \
    room.cpp \
    wall.cpp \
    bombedwall.cpp \
    mazefactory.cpp \
    mazeprotytypefactory.cpp \
    maze.cpp \
    mazegame.cpp \
    side.cpp \
    roomwithabomb.cpp

HEADERS += \
    mapsite.h \
    door.h \
    room.h \
    wall.h \
    bombedwall.h \
    mazefactory.h \
    mazeprotytypefactory.h \
    maze.h \
    mazegame.h \
    side.h \
    roomwithabomb.h

