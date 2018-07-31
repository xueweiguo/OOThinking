#ifndef COUNTINGMAZEBUILDER_H
#define COUNTINGMAZEBUILDER_H

#include <memory>
#include"mazebuilder.h"


class CountingMazeBuilder : public MazeBuilder
{
public:
    CountingMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int n);
    virtual void BuildDoor(int n1, int n2);
    void GetCounts(int& doors, int & rooms) const;
private:
    int _doors;
    int _rooms;
};

#endif // COUNTINGMAZEBUILDER_H
