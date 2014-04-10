#include <iostream>
#include "hero.h"

using namespace std;

int main()
{
    Hero* hero = new Hero("Niki", 100);
    cout<<hero->getHealth()<<endl;
    hero->takeDamage(20);
    cout<<hero->getHealth()<<endl;

    Weapon* weapon = new Weapon("axe", 50);
    hero->equipWeapon(weapon);
    cout<<hero->getWeapon()->getType()<<endl;
    return 0;
}
