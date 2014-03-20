#ifndef DUNGEON_H_INCLUDED
#define DUNGEON_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "entity.h"
#include <vector>

using namespace std;

class Dungeon
{
public:
    char dungeonMap[40][40];
    int width;
    int height;
    vector<Entity*> entities;

    Dungeon(const char* path)
    {
        string line;
        ifstream file;
        file.open(path);
        int mapIndex = 0;
        while(!file.eof())
        {
            file >> line;
            for(int i = 0; i < line.length(); i++)
            {
                this->dungeonMap[mapIndex][i] = line[i];
            }
            mapIndex++;
        }
        this->height = mapIndex;
        this->width = line.length();
        file.close();
    }

    void printMap()
    {
        for(int i = 0; i < height; i++)
        {
            for(int j = 0; j < width; j++)
            {
                cout<<this->dungeonMap[i][j];
            }
            cout<<endl;
        }
    }

    bool spawn(string entityName, Entity* entity);
    void move(char dir, Entity* entity);
};


#endif // DUNGEON_H_INCLUDED
