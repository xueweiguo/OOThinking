#include <iostream>

#include "customthemefactory.h"

using namespace std;

CustomThemeFactory::CustomThemeFactory(const string& name)
    :ThemeFactory(name){


}

CustomThemeFactory::~CustomThemeFactory(){

}

Window* CustomThemeFactory::createWindow(){
    cout << "CustomThemeFactory::createWindow()" << endl;
    return nullptr;
}

Scrollbar* CustomThemeFactory::createScrollbar(){
    cout << "CustomThemeFactory::createScrollbar()" << endl;
    return nullptr;
}

