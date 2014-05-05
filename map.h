#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include <iostream>
#include "entity.h"

using namespace std;

class Map
{
private:
    Entity** entities;

public:
    Map()
    {
       entities = new Entity*[100];
    }

    void addEntity(Entity* entity)
    {
        entities[entity->getX() + entity->getY() * 10] = entity;
    }

//    void move(int x, int y,Entity* ent)
//    {
//        entities[ent->getX() + ent->getY() * 10] = NULL;
//        entities[x + y * 10] = ent;
//    }

    Entity* getEntity(int x, int y) const { return entities[x + y * 10]; }
};


#endif // MAP_H_INCLUDED
