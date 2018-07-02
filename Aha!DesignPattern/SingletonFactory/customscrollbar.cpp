#include "customscrollbar.h"

CustomScrollbar::CustomScrollbar()
{

}

CustomScrollbar::CustomScrollbar(const CustomScrollbar& from){
    //复制数据成员。
}

CustomScrollbar* CustomScrollbar::clone(){
    CustomScrollbar* scrollbar = new CustomScrollbar(*this);
    //根据需要更新新对象的内容
    //...
    return scrollbar;
}
