#include <iostream>

using namespace std;

#include"themefactory.h"

int main()
{
    ThemeFactory::system_theme = "system1";
    ThemeFactory* factory1 = ThemeFactory::getInstance();
    factory1->createWindow();
    factory1->createScrollbar();

    ThemeFactory* factory2 = ThemeFactory::getInstance();
    factory2->createWindow();
    factory2->createScrollbar();

    ThemeFactory::system_theme = "Test1";
    ThemeFactory* factory3 = ThemeFactory::getInstance();
    factory3->createWindow();
    factory3->createScrollbar();
    return 0;
}


