#include "entity.h"

using namespace std;

float Entity::getHealth()
{
    return this->health;
}

bool Entity::isAlive()
{
    return (health > 0);
}

void  Entity::takeDamage(float damagePoints)
{
    if(isAlive())
        this->health -= damagePoints;

    if(this->health < 0)
        this->health = 0;
}

bool Entity::takeHealing(int healingPoints)
{
    if(!isAlive())
        return false;

    this->health += healingPoints;

    if(this->health > 100)
        this->health = 100;

    return true;
}

bool Entity::hasWeapon()
{
    return isEquipped;
}

void Entity::equipWeapon(const Weapon& weapon)
{
    this->isEquipped = true;
    this->weapon = weapon;
}

float Entity::attack()
{
    if(isEquipped)
        return this->weapon.damage;

    return 0.0f;
}
