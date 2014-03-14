#include "orc.h"

using namespace std;

float Orc::attack()
{
    if(isEquipped)
        return this->weapon.damage * berserk_factor;

    return 0.0f;
}
