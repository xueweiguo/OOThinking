#include "mazeprotytypefactory.h"

MazeProtytypeFactory::MazeProtytypeFactory(
    MazePtr m, WallPtr w, RoomPtr r, DoorPtr d)
{
    _prototypeMaze = m;
    _prototypeWall = w;
    _prototypeRoom = r;
    _prototypeDoor = d;
}

MazePtr MazeProtytypeFactory::MakeMaze() const
{
    return _prototypeMaze->Clone();
}

RoomPtr MazeProtytypeFactory::MakeRoom(int n) const
{
    RoomPtr room = _prototypeRoom->Clone();
    room->setNumber(n);
    return room;
}

WallPtr MazeProtytypeFactory::MakeWall() const
{
    return _prototypeWall->Clone();
}

DoorPtr MazeProtytypeFactory::MakeDoor(RoomPtr r1, RoomPtr r2) const
{
    DoorPtr door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
