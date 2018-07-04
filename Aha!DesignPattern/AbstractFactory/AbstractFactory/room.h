#ifndef ROOM_H
#define ROOM_H

#include<map>
#include"gameobj.h"
#include"side.h"

class Room : public GameObj
{
public:
    enum SideId{
        North = 0,
        East,
        South,
        West
    };
    Room(int n);
    virtual ~Room();
    void SetSide(SideId id, SidePtr side);
protected:
    std::map<SideId, SidePtr> sides;
    int number;
};

typedef std::shared_ptr<Room> RoomPtr;

#endif // ROOM_H
