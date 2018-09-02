#ifndef SPELL_H
#define SPELL_H

#include<memory>

class Spell
{
public:
    Spell();
};

typedef std::shared_ptr<Spell> SpellPtr;

#endif // SPELL_H
