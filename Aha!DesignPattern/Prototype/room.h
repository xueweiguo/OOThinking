#ifndef ROOM_H
#define ROOM_H

#include<memory>
#include<map>
#include"side.h"

class Room;
typedef std::shared_ptr<Room> RoomPtr;

class Room
{
public:
    enum SideId{
        North = 0,
        East,
        South,
        West
    };
    Room();
    Room(const Room& other);
    RoomPtr Clone() const;
    void setNumber(int n);
    void SetSide(SideId id, SidePtr side);
private:
    std::map<SideId, SidePtr> sides;
    int number;
};

#endif // ROOM_H
