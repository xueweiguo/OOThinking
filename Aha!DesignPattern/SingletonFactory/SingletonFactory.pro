TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    themefactory.cpp \
    systemtheme2factory.cpp \
    customthemefactory.cpp \
    widget.cpp \
    window.cpp \
    scrollbar.cpp \
    customwindow.cpp \
    customscrollbar.cpp \
    systemtheme1factory.cpp

HEADERS += \
    themefactory.h \
    systemtheme2factory.h \
    customthemefactory.h \
    widget.h \
    window.h \
    scrollbar.h \
    customwindow.h \
    customscrollbar.h \
    systemtheme1factory.h
