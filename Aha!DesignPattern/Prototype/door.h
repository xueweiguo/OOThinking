#ifndef DOOR_H
#define DOOR_H

#include<memory>

#include"side.h"
#include"room.h"

class Door;
typedef std::shared_ptr<Door> DoorPtr;

class Door : public Side
{
public:
    Door();
    Door(const Door&);
    virtual void Initialize(RoomPtr r1, RoomPtr r2);
    virtual DoorPtr Clone() const;
    virtual void Enter();
    RoomPtr OtherSideFrom(RoomPtr r);
private:
    RoomPtr room1;
    RoomPtr room2;
};



#endif // DOOR_H
