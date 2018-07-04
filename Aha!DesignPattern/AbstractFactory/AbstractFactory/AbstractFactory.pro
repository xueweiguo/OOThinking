TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    mazefactory.cpp \
    maze.cpp \
    wall.cpp \
    room.cpp \
    door.cpp \
    mazegame.cpp \
    side.cpp \
    gameobj.cpp \
    enchantedroom.cpp \
    doorneedingspell.cpp \
    enchantedmazefactory.cpp \
    spell.cpp \
    bombedmazefactory.cpp \
    roomwithabomb.cpp \
    bombedwall.cpp

HEADERS += \
    mazefactory.h \
    maze.h \
    wall.h \
    room.h \
    door.h \
    mazegame.h \
    side.h \
    gameobj.h \
    enchantedroom.h \
    doorneedingspell.h \
    enchantedmazefactory.h \
    spell.h \
    bombedmazefactory.h \
    roomwithabomb.h \
    bombedwall.h
