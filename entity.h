#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <string>
#include "weapon.cpp"

using namespace std;

class Entity
{
public:
    Weapon weapon;
    string name;
    float health;
    int x, y;
    bool isEquipped = false;

    Entity() {}

    Entity(string name, float health)
    {
        this->name = name;
        this->health = health;
        x = 0;
        y = 0;
    }

    float getHealth();
    bool isAlive();
    void takeDamage(float damagePoints);
    bool takeHealing(int healingPoints);
    bool hasWeapon();
    void equipWeapon(Weapon weapon);
    float attack();

    virtual string instanceOf() const
    {
        return "entity";
    }

};


#endif // ENTITY_H_INCLUDED
