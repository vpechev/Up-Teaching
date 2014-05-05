#include "hero.h"

using namespace std;

int Hero::attack()
{
    if(this->getIsEquiped())
        return this->getWeapon().getDamage();

    return 0;
}
