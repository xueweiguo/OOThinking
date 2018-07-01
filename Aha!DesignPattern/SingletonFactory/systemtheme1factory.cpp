#include <iostream>
#include "systemtheme1factory.h"

using namespace std;

SystemTheme1Factory::SystemTheme1Factory()
    :ThemeFactory("system1")
{

}

Window* SystemTheme1Factory::createWindow(){
    cout << "SystemTheme1Factory::createWindow()" << endl;
    return nullptr;
}
Scrollbar* SystemTheme1Factory::createScrollbar(){
    cout << "SystemTheme1Factory::createScrollbar()" << endl;
    return nullptr;
}
