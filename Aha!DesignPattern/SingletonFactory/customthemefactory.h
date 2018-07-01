#ifndef CUSTOMTHEMEFACTORY_H
#define CUSTOMTHEMEFACTORY_H

#include<string>

#include "themefactory.h"

class CustomThemeFactory : public ThemeFactory
{
public:
    CustomThemeFactory(const std::string& name);
    ~CustomThemeFactory();
protected:
    Window* createWindow();
    Scrollbar* createScrollbar();
};

#endif // CUSTOMTHEMEFACTORY_H
