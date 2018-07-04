#ifndef ROOMWITHABOMB_H
#define ROOMWITHABOMB_H

#include "room.h"

class RoomWithABomb : public Room
{
public:
    RoomWithABomb(int n);
    virtual ~RoomWithABomb() = default;
};

#endif // ROOMWITHABOMB_H
