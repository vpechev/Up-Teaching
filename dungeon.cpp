#include "dungeon.h"
#include "hero.h"
#include "orc.h"
#include <typeinfo>

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

                return true;
            }
        }
    }

    return false;
}
