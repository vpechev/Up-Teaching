#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <string>
#include "weapon.cpp"

using namespace std;

class Entity
{
public:
    string name;
    float health;
    Weapon weapon;
    bool isEquipped = false;

    Entity() {}

    Entity(string name, float health)
    {
        this->name = name;
        this->health = health;
    }

    float getHealth();
    bool isAlive();
    void takeDamage(float damagePoints);
    bool takeHealing(int healingPoints);
    bool hasWeapon();
    void equipWeapon(Weapon weapon);
    float attack();

    virtual string instanceOf()
    {
        return "entity";
    }

};


#endif // ENTITY_H_INCLUDED
