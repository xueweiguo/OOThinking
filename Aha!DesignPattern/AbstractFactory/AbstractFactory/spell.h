#ifndef SPELL_H
#define SPELL_H

#include"gameobj.h"

class Spell : public GameObj
{
public:
    Spell();
    virtual ~Spell();
};

typedef std::shared_ptr<Spell> SpellPtr;

#endif // SPELL_H
