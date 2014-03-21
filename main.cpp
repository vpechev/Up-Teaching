#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"
#include <vector>

using namespace std;

int main()
{
    Entity* ent = new Hero("Huko", "Addd", 100);
    ent->equipWeapon(Weapon("sword", 10 , 1));
    cout<<ent->attack()<<endl;
//	Hero* heroes = new Hero[100];
//	heroes[0] = Hero("Huki", "The cool guy", 200);
//	cout<<heroes[0].getNickname()<<endl;
//    Dungeon* dung = new Dungeon("map.txt");
//    Hero* hero = new Hero("Huko", "The programmer", 100);
//    dung->spawn(hero->name, hero);
//    dung->printMap();
//
//    dung->move('d', hero);
//
//    cout<<endl;
//    dung->printMap();
    return 0;
}
