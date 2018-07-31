#include "maze.h"
#include "room.h"

Maze::Maze()
{

}

RoomPtr Maze::RoomNo(int n)
{
    std::map<int, RoomPtr>::iterator it;
    it = m_roomMap.find(n);
    if(it != m_roomMap.end())
    {
        return it->second;
    }
    else
    {
        return nullptr;
    }
}

void Maze::AddRoom(RoomPtr room)
{
    m_roomMap[room->Number()] = room;
}


