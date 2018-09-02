#ifndef ROOM_H
#define ROOM_H

#include"memory.h"
#include"side.h"

enum Dir
{
    North,
    East,
    South,
    West
};

class Room
{
public:
    Room(int n);
    void setSide(Dir d, SidePtr s);
};

typedef std::shared_ptr<Room> RoomPtr;

#endif // ROOM_H
