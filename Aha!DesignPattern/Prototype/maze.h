#ifndef MAZE_H
#define MAZE_H

#include<memory>
#include<vector>

#include "room.h"

class Maze;
typedef std::shared_ptr<Maze> MazePtr;

class Maze
{
public:
    Maze();
    Maze(const Maze& other);
    MazePtr Clone() const;
    void AddRoom(RoomPtr room);
protected:
    std::vector<RoomPtr> rooms;
};



#endif // MAZE_H
