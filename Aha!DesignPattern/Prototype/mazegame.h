#ifndef MAZEGAME_H
#define MAZEGAME_H

#include"mazefactory.h"

class MazeGame
{
public:
    MazeGame();
    MazePtr CreateMaze(MazeFactory& factory);
};

#endif // MAZEGAME_H
