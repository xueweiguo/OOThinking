#ifndef SYSTEMTHEME2FACTORY_H
#define SYSTEMTHEME2FACTORY_H

#include "themefactory.h"

class SystemTheme2Factory : public ThemeFactory
{
public:
    SystemTheme2Factory();
protected:
    Window* createWindow();
    Scrollbar* createScrollbar();
};

#endif // SYSTEMTHEME2FACTORY_H
