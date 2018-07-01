#ifndef SYSTEMTHREME1FACTORY_H
#define SYSTEMTHREME1FACTORY_H

#include "themefactory.h"

class SystemTheme1Factory : public ThemeFactory
{
public:
    SystemTheme1Factory();
protected:
    Window* createWindow();
    Scrollbar* createScrollbar();
};

#endif // SYSTEMTHREME1FACTORY_H
