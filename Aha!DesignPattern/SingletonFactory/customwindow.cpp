#include "customwindow.h"

CustomWindow::CustomWindow()
{

}

CustomWindow::CustomWindow(const CustomWindow& from){
    //复制数据成员。
}

CustomWindow* CustomWindow::clone(){
    CustomWindow* window = new CustomWindow(*this);
    //根据需要更新新对象的内容
    //...
    return window;
}
