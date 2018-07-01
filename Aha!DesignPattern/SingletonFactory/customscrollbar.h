#ifndef CUSTOMSCROLLBAR_H
#define CUSTOMSCROLLBAR_H

#include"scrollbar.h"

class CustomScrollbar : public Scrollbar
{
public:
    CustomScrollbar();
    CustomScrollbar* clone();
};

#endif // CUSTOMSCROLLBAR_H
