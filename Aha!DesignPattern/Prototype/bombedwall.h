#ifndef BOMBEDWALL_H
#define BOMBEDWALL_H

#include"wall.h"

class BombedWall : public Wall
{
public:
    BombedWall();
    BombedWall(const BombedWall& other);
    virtual WallPtr Clone() const;
    bool HadBomb();
private:
    bool _bomb;
};

#endif // BOMBEDWALL_H
