#ifndef DOOR_H
#define DOOR_H

#include "side.h"
#include "room.h"

class Door : public Side
{
public:
    Door(RoomPtr r1, RoomPtr r2);
    virtual ~Door();
};

typedef std::shared_ptr<Door> DoorPtr;

#endif // DOOR_H
