#include "dungeon.h"
#include "hero.h"
#include "orc.h"
#include <typeinfo>

using namespace std;

bool Dungeon::spawn(string entityName, Entity* entity)
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(dungeonMap[i][j] == 'S')
            {
                if(entity->instanceOf() == "hero")
                {
                    dungeonMap[i][j] = 'H';
                }

                if(entity->instanceOf() == "orc")
                {
                    dungeonMap[i][j] = 'O';
                }

                entity->x = j;
                entity->y = i;
                return true;
            }
        }
    }

    return false;
}

void Dungeon::move(char dir, Entity* entity)
{
    switch(dir)
    {
    case 'u':

        if(dungeonMap[entity->x][entity->y-1] == '.')
        {
            dungeonMap[entity->y-1][entity->x] = dungeonMap[entity->y][entity->x];
            dungeonMap[entity->y][entity->x] = '.';
            entity->y -= 1;
        }
        break;
    case 'd':

        if(dungeonMap[entity->y+1][entity->x] == '.')
        {
            dungeonMap[entity->y+1][entity->x] = dungeonMap[entity->y][entity->x];
            dungeonMap[entity->y][entity->x] = '.';
            entity->y += 1;
        }
        break;

    }
}
