#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <string>
#include "entity.h"

using namespace std;

class Hero : public Entity
{

public:
    Hero() {}

    Hero(string name, int health, int x, int y) : Entity(name, health, x, y)
    {

    }

    virtual int attack();

    virtual string instanceOf() const
    {
        return "hero";
    }

};

#endif // HERO_H_INCLUDED
