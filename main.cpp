#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"

using namespace std;


int main()
{
    Dungeon* dung = new Dungeon("map.txt");
    Hero* hero = new Hero("Huko", "The programmer", 100);
    Orc* orc = new Orc("Orketo", 50, 1.2);
    dung->spawn("hero", hero);
    dung->printMap();
    dung->spawn("orc", orc);
    dung->printMap();
    return 0;
}
