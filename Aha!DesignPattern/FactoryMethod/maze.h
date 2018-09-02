#ifndef MAZE_H
#define MAZE_H

#include<memory>

#include"room.h"

class Maze
{
public:
    Maze();
    void AddRoom(RoomPtr r);
};

typedef std::shared_ptr<Maze> MazePtr;

#endif // MAZE_H
