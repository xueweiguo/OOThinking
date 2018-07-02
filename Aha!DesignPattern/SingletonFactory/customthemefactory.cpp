#include <iostream>

#include "customthemefactory.h"
#include "customscrollbar.h"
#include "customwindow.h"

using namespace std;

CustomThemeFactory::CustomThemeFactory(const string& name)
    :ThemeFactory(name)
    ,m_window(nullptr)
    ,m_scrollbar(nullptr){
    //演示代码直接使用主题名作为文件名。
    readPrototype(name);
}

CustomThemeFactory::~CustomThemeFactory(){
    delete m_window;
    delete m_scrollbar;
}

void CustomThemeFactory::readPrototype(const string& filename){
    //使用boost等序列化方法读出m_scrollbar和m_window的内容。
    //首先打开filename的设定文件
    //此时是演示代码，直接生成对象。
    m_window = new CustomWindow;
    m_scrollbar = new CustomScrollbar;
}

Window* CustomThemeFactory::createWindow(){
    cout << "CustomThemeFactory::createWindow()" << endl;
    return m_window->clone();
}

Scrollbar* CustomThemeFactory::createScrollbar(){
    cout << "CustomThemeFactory::createScrollbar()" << endl;
    return m_scrollbar->clone();
}


