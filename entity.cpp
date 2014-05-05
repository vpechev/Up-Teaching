#include "entity.h"
#include <string>

using namespace std;

bool Entity::isAlive()
{
    return (this->health > 0);
}

void Entity::takeDamage(float damage)
{
    this->health -= damage;
}

void Entity::takeHealing(int healPoints)
{
    if(!this->isAlive())
        return;

    this->health += healPoints;
}

void Entity::equipWeapon(Weapon* weap)
{
    this->weapon = weap;
}


