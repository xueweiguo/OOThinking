#ifndef MAZE_H
#define MAZE_H

#include<vector>
#include"gameobj.h"
#include"room.h"

class Maze : public GameObj
{
public:
    Maze();
    virtual ~Maze();
    void AddRoom(RoomPtr room);
protected:
    std::vector<RoomPtr> rooms;
};

typedef std::shared_ptr<Maze> MazePtr;

#endif // MAZE_H
