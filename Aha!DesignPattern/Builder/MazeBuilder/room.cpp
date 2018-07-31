#include "room.h"

Room::Room(int n)
    :m_number(n)
{

}

int Room::Number()
{
    return m_number;
}

void Room::SetSide(Direction dir, SidePtr side)
{
    m_sideMap[dir] = side;
}

bool Room::GetSide(Direction dir, SidePtr& side){
    std::map<Direction, SidePtr>::iterator it;
    it = m_sideMap.find(dir);
    if(it != m_sideMap.end())
    {
        side = it->second;
        return true;
    }
    else
    {
        return false;
    }
}
