#include "roomwithabomb.h"

RoomWithABomb::RoomWithABomb()
{

}

RoomWithABomb::RoomWithABomb(const RoomWithABomb& other)
    :Room(other)
{

}

RoomPtr RoomWithABomb::Clone() const
{
    return std::make_shared<RoomWithABomb>();
}
