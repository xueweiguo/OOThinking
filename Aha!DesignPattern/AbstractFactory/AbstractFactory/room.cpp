#include <memory>
#include <iostream>
#include "room.h"

using namespace std;

Room::Room(int n)
    :number(n)
{
    cout << "Room::Room()" << endl;
}

Room::~Room()
{

}

void Room::SetSide(SideId id, SidePtr side)
{

}

