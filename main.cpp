#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"
#include <vector>

using namespace std;


int main()
{
    Entity* hero = new Hero("Niki", "The hammer", 100);
    Weapon weap("sword", 50, 1);

    hero->equipWeapon(weap);
    //delete weap;
    cout<<hero->weapon.type<<endl;
    return 0;
}
