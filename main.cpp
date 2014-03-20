#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"
#include <vector>

using namespace std;

int main()
{
	cout<<"In home changes"<<endl;
    Dungeon* dung = new Dungeon("map.txt");
    Hero* hero = new Hero("Huko", "The programmer", 100);

    dung->spawn(hero->name, hero);
    dung->printMap();

    dung->move('d', hero);

    cout<<endl;
    dung->printMap();
    return 0;
}
