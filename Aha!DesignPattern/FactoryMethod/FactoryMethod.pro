TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    mazegame.cpp \
    maze.cpp \
    room.cpp \
    wall.cpp \
    door.cpp \
    side.cpp \
    bombedmazegame.cpp \
    enchantedroom.cpp \
    spell.cpp \
    roorneedingspell.cpp \
    bombedwall.cpp \
    roomwithabomb.cpp \
    enchantedmazegame.cpp

HEADERS += \
    mazegame.h \
    maze.h \
    room.h \
    wall.h \
    door.h \
    side.h \
    bombedmazegame.h \
    enchantedroom.h \
    spell.h \
    roorneedingspell.h \
    bombedwall.h \
    roomwithabomb.h \
    enchantedmazegame.h \
    doorneedingspell.h
