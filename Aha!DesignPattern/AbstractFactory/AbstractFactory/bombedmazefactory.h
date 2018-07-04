#ifndef BOMBEDMAZEFACTORY_H
#define BOMBEDMAZEFACTORY_H

#include"mazefactory.h"

class BombedMazeFactory : public MazeFactory
{
public:
    BombedMazeFactory();
    ~BombedMazeFactory() = default;
    WallPtr MakeWall() const;
    RoomPtr MakeRoom(int n) const;
};

#endif // BOMBEDMAZEFACTORY_H
