#include <iostream>

#include "systemtheme2factory.h"

using namespace std;

SystemTheme2Factory::SystemTheme2Factory()
    :ThemeFactory("system2"){

}

Window* SystemTheme2Factory::createWindow(){
    cout << "System2Theme1Factory::createWindow()" << endl;
    return nullptr;
}
Scrollbar* SystemTheme2Factory::createScrollbar(){
    cout << "System2Theme1Factory::createScrollbar()" << endl;
    return nullptr;
}
