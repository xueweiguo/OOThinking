#ifndef ROOM_H
#define ROOM_H

#include<memory>
#include<map>
#include"side.h"

enum Direction
{
    None,
    North,
    South,
    East,
    West
};

class Room
{
public:
    Room(int n);
    int Number();
    void SetSide(Direction dir, SidePtr side);
    bool GetSide(Direction dir, SidePtr& side);
private:
    int m_number;
    std::map<Direction, SidePtr> m_sideMap;
};

typedef std::shared_ptr<Room> RoomPtr;

#endif // ROOM_H
