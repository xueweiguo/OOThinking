#include <iostream>
#include "themefactory.h"
#include "systemtheme1factory.h"
#include "systemtheme2factory.h"
#include "customthemefactory.h"

using namespace std;

ThemeFactory* ThemeFactory::instance = nullptr;

string ThemeFactory::system_theme("system1");

ThemeFactory* ThemeFactory::getInstance(){
    std::string new_name = getCurrentTheme();
    if(instance != nullptr){
        if(instance->m_name == new_name){
            cout << "return exist factory." << endl;
            return instance;
        }
        deleteInstance();
    }
    if(new_name == "system1"){
        cout << "create system1 factory." << endl;
        instance = new SystemTheme1Factory;
    }
    else if(new_name == "system2"){
        cout << "create system2 factory." << endl;
        instance = new SystemTheme2Factory;
    }
    else{
        cout << "create custom factory." << endl;
        instance = new CustomThemeFactory(new_name);
    }
    return instance;
}

void ThemeFactory::deleteInstance(){
    if(instance != nullptr){
        cout << "delete factory." << endl;
        delete instance;
        instance = nullptr;
    }
}

ThemeFactory::ThemeFactory(const string& name)
    :m_name(name){
}

ThemeFactory::~ThemeFactory(){
}

string& ThemeFactory::getCurrentTheme(){
    //实际代码需要从操作系统取得当前主题名称。
    //这里是测试用代码。
    return system_theme;
}
