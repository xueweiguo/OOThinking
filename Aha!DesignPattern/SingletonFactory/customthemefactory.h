#ifndef CUSTOMTHEMEFACTORY_H
#define CUSTOMTHEMEFACTORY_H

#include<string>

#include "themefactory.h"

class CustomScrollbar;
class CustomWindow;

class CustomThemeFactory : public ThemeFactory
{
public:
    CustomThemeFactory(const std::string& name);
    ~CustomThemeFactory();
protected:
    Window* createWindow();
    Scrollbar* createScrollbar();
    void readPrototype(const std::string& filename);
    CustomWindow* m_window;
    CustomScrollbar* m_scrollbar;
};

#endif // CUSTOMTHEMEFACTORY_H
