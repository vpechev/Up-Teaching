#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <string>
#include "entity.h"

using namespace std;

class Hero : public Entity
{

public:
    Hero() {}

    Hero(string name, int health) : Entity(name, health)
    {

    }

};

#endif // HERO_H_INCLUDED
