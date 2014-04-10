#ifndef ORC_H_INCLUDED
#define ORC_H_INCLUDED

#include "entity.h"

class Orc : public Entity
{
private:
    float berserk_factor;

public:
    Orc() {}

    Orc(string name, int health, float berserk, int x, int y) : Entity(name, health, x, y)
    {
        if(berserk > 2)
            berserk = 2;
        if(berserk < 1)
            berserk = 1;

        this->berserk_factor = berserk;
    }


    virtual int attack();
    virtual string instanceOf() const { return "orc"; }

};

#endif // ORC_H_INCLUDED
