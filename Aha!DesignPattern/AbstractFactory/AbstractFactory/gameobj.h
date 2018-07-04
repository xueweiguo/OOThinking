#ifndef GAMEOBJ_H
#define GAMEOBJ_H

class GameObj
{
public:
    GameObj();
    virtual ~GameObj();
    static int getCounter();
private:
    static int obj_counter;
};

#endif // GAMEOBJ_H
