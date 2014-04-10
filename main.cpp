#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "map.h"
#include "entity.h"
#include "hero.h"
#include "orc.h"

using namespace std;

vector<Entity*> entities;

void addEntity(Entity* entity)
{
    entities.push_back(entity);
}

string generateRandomString(int length)
{
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    string result;
    result.resize(length);

    for(int i = 0; i < length; i++)
        result[i] = charset[rand() % charset.length()];

    return result;
}

int main()
{
    srand(time(NULL));
    Map* board = new Map();
    Entity* hero = new Hero("Niki", 100, 1, 2);
    Weapon* weap = new Weapon("axe", 20);
    hero->equipWeapon(*weap);

//    for(int i = 0; i < 5; i++)
//    {
//        int x = rand() % 10 + 1;
//        int y = rand() % 10 + 1;
//
//        addEntity(new Orc(generateRandomString(5), 100, 1.2, x, y));
//    }

//    for(int i = 0; i < entities.size(); i++)
//    {
//        if(abs(entities[i]->getX() - hero->getX()) <= 1)
//        {
//            cout<<entities[i]->getName()<<" Near by X"<<endl;
//        }
//
//        if(abs(entities[i]->getY() - hero->getY()) <= 1)
//        {
//            cout<<entities[i]->getName()<<" Near by Y"<<endl;
//        }
//    }

    Entity* enemy = new Orc(generateRandomString(5), 100, 1.2, 1, 1);
//    addEntity(enemy);
    enemy->move(1, 0);
    cout<<enemy->getName()<<endl;
    board->addEntity(enemy);
    Entity* ent = board->getEntity(2,1);
    cout<<ent->getName()<<endl;
    return 0;
}
