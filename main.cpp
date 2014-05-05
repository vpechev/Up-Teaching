#include <iostream>
#include "hero.h"

using namespace std;

int main()
{
//	cout<<"Starting game"<<endl;
//    Dungeon* dung = new Dungeon("map.txt");
//    vector<Entity> entities;
//    entities.push_back(Orc("fsdfsd", 100, 1.2));
//    Hero* hero = new Hero("Huko", "The programmer", 100);
//    Orc* orc = new Orc("Orketo", 50, 1.2);
//    dung->spawn("hero", hero);
//    dung->printMap();
//    dung->spawn("orc", orc);
//    dung->printMap();
    Hero* hero = new Hero("Niki", 100);
    cout<<hero->getHealth()<<endl;
    hero->takeDamage(20);
    cout<<hero->getHealth()<<endl;

    Weapon* weapon = new Weapon("axe", 50);
    hero->equipWeapon(weapon);
    cout<<hero->getWeapon()->getType()<<endl;
    return 0;
}
