#ifndef THEMEFACTORY_H
#define THEMEFACTORY_H

#include<string>

class Window;
class Scrollbar;

class ThemeFactory
{
public:
    static ThemeFactory* getInstance();
    static void deleteInstance();
    virtual Window* createWindow() = 0;
    virtual Scrollbar* createScrollbar() = 0;

    //取得当前主题,演示用
    static std::string system_theme;
protected:
    ThemeFactory(const std::string& name);
    virtual ~ThemeFactory();
    std::string m_name;
    static ThemeFactory* instance;

    //取得当前出题。
    static std::string& getCurrentTheme();
};

#endif // THEMEFACTORY_H
