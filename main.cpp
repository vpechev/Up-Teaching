#include <iostream>
#include "hero.h"

using namespace std;

int main()
{
    Hero* hero = new Hero("Niki", "fsdfsdfsd", 100);
    cout<<hero->health<<endl;
    hero->takeDamage(20);
    cout<<hero->health<<endl;

    Weapon weapon("axe", 50);
    hero->equipWeapon(weapon);
    cout<<hero->weapon.type<<endl;
    return 0;
}
