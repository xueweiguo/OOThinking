#ifndef BOMBEDWALL_H
#define BOMBEDWALL_H

#include<memory>
#include"wall.h"

class BombedWall : public Wall
{
public:
    BombedWall();
};

typedef std::shared_ptr<BombedWall> BombedWallPtr;

#endif // BOMBEDWALL_H
