#ifndef CUSTOMWINDOW_H
#define CUSTOMWINDOW_H

#include"window.h"

class CustomWindow : public Window
{
public:
    CustomWindow();
    CustomWindow* clone();
};

#endif // CUSTOMWINDOW_H
