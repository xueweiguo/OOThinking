#include "bombedwall.h"

BombedWall::BombedWall()
    :Wall()
{

}

BombedWall::BombedWall(const BombedWall& other)
    :Wall(other)
    ,_bomb(other._bomb)
{

}

WallPtr BombedWall::Clone() const
{
    return std::make_shared<BombedWall>(*this);
}

bool BombedWall::HadBomb()
{
    return _bomb;
}
