#ifndef ROOMWITHABOMB_H
#define ROOMWITHABOMB_H

#include"room.h"

class RoomWithABomb : public Room
{
public:
    RoomWithABomb();
    RoomWithABomb(const RoomWithABomb& other);
    RoomPtr Clone() const;
};

#endif // ROOMWITHABOMB_H
