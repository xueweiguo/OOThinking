#include "door.h"

Door::Door()
{

}

Door::Door(const Door& d)
    :room1(d.room1)
    ,room2(d.room2)
{

}

void Door::Initialize(RoomPtr r1, RoomPtr r2)
{
    room1 = r1;
    room2 = r2;
}

DoorPtr Door::Clone() const
{
    return std::make_shared<Door>(*this);
}

void Door::Enter()
{


}

RoomPtr Door::OtherSideFrom(RoomPtr r)
{


}
