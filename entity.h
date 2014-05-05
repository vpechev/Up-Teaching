#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include<string>
#include "weapon.h"

using namespace std;

class Entity
{
private:
    Weapon* weapon;
    string name;
    int health;

protected:
    int test;

public:

    Entity() {}

    Entity(string name, int health)
    {
        this->name = name;
        this->health = health;
    }

    bool isAlive();
    void takeDamage(float damage);
    void takeHealing(int healPoints);
    void equipWeapon(Weapon* weap);

    /** GETTERS **/
    int getHealth() const
    {
        return this->health;
    }

    string getName() const
    {
        return this->name;
    }

    Weapon* getWeapon() const
    {
        return this->weapon;
    }

};

#endif // ENTITY_H_INCLUDED
