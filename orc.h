#ifndef ORC_H_INCLUDED
#define ORC_H_INCLUDED

#include "entity.h"

class Orc : public Entity
{
private:
    float berserk_factor;

public:

    Orc(string name, float health, float berserk) : Entity(name, health)
    {
        if(berserk > 2)
            berserk = 2;
        if(berserk < 1)
            berserk = 1;

        this->berserk_factor = berserk;
    }

    Orc() {}

    float attack();

    string instanceOf()
    {
        return "orc";
    }

};

#endif // ORC_H_INCLUDED
