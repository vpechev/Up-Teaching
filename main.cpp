#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"
#include <vector>

using namespace std;


int main()
{
    Dungeon* dung = new Dungeon("map.txt");
    vector<Entity> entities;
    entities.push_back(Orc("fsdfsd", 100, 1.2));
    Hero* hero = new Hero("Huko", "The programmer", 100);
    Orc* orc = new Orc("Orketo", 50, 1.2);
    dung->spawn("hero", hero);
    dung->printMap();
    dung->spawn("orc", orc);
    dung->printMap();
    return 0;
}
