#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#include "mazebuilder.h"
#include "room.h"
#include "maze.h"

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();
    virtual void BuildMaze();
    virtual void BuildRoom(int n);
    virtual void BuildDoor(int n1, int n2);
    virtual MazePtr GetMaze();
private:
    Direction CommonWall(RoomPtr r1, RoomPtr r2);
    MazePtr _currentMaze;
};

#endif // STANDARDMAZEBUILDER_H
