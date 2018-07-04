#include "gameobj.h"

int GameObj::obj_counter = 0;

GameObj::GameObj()
{
    obj_counter++;
}

GameObj::~GameObj()
{
    obj_counter--;
}

int GameObj::getCounter()
{
    return obj_counter;
}
