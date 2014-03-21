#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include<string>
#include "weapon.h"

using namespace std;

class Entity
{
public:
    Weapon weapon;
    string name;
    int health;

    Entity() {}

    Entity(string name, int health)
    {
        this->name = name;
        this->health = health;
    }

    bool isAlive();
    void takeDamage(float damage);
    void takeHealing(int healPoints);
    void equipWeapon(Weapon weap);

};

#endif // ENTITY_H_INCLUDED
