#ifndef MAZEGAME_H
#define MAZEGAME_H

class MazeFactory;
#include"maze.h"

class MazeGame{
public:
    MazeGame();
    MazePtr CreateMaze(MazeFactory& factory);
};

#endif // MAZEGAME_H
