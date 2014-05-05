#include "orc.h"

using namespace std;

int Orc::attack()
{
    if(getIsEquiped())
        return this->getWeapon().getDamage() * berserk_factor;

    return 0;
}
