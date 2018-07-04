#ifndef SIDE_H
#define SIDE_H

#include"gameobj.h"

class Side : public GameObj
{
public:
    Side();
    virtual ~Side();
};

typedef std::shared_ptr<Side> SidePtr;

#endif // SIDE_H
