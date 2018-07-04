#include <memory>
#include <iostream>
#include "roomwithabomb.h"

using namespace std;

RoomWithABomb::RoomWithABomb(int n)
    :Room(n)
{
    cout << "-RoomWithABomb::RoomWithABomb()" << endl;
}
