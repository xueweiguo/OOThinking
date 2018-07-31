#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

#include<maze.h>

class MazeBuilder
{
public:
    virtual void BuildMaze();
    virtual void BuildRoom(int n);
    virtual void BuildDoor(int n1, int n2);
    virtual MazePtr GetMaze();
protected:
    MazeBuilder();
};

#endif // MAZEBUILDER_H
