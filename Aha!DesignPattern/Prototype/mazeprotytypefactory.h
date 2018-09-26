#ifndef MAZEPROTYTYPEFACTORY_H
#define MAZEPROTYTYPEFACTORY_H

#include"mazefactory.h"

class MazeProtytypeFactory : public MazeFactory
{
public:
    MazeProtytypeFactory(MazePtr m, WallPtr w, RoomPtr r, DoorPtr d);
    virtual MazePtr MakeMaze() const;
    virtual RoomPtr MakeRoom(int n) const;
    virtual WallPtr MakeWall() const;
    virtual DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const;
private:
    MazePtr _prototypeMaze;
    RoomPtr _prototypeRoom;
    WallPtr _prototypeWall;
    DoorPtr _prototypeDoor;
};

#endif // MAZEPROTYTYPEFACTORY_H
