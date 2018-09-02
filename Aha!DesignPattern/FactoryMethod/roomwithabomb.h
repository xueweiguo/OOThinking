#ifndef ROOMWITHABOMB_H
#define ROOMWITHABOMB_H

#include <memory>
#include"room.h"

class RoomWithABomb : public Room
{
public:
    RoomWithABomb(int n);
};

typedef std::shared_ptr<RoomWithABomb> BombRoomPtr;

#endif // ROOMWITHABOMB_H
