#include "room.h"

Room::Room()
    :number(-1)
{

}

Room::Room(const Room& other)
    :number(other.number)
{

}

RoomPtr Room::Clone() const
{
    return std::make_shared<Room>(*this);
}

void Room::setNumber(int n)
{
    number = n;
}

void Room::SetSide(SideId id, SidePtr side)
{

}
