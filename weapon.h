#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include <string>

using namespace std;

class Weapon
{
public:
    string type;
    int damage;

    Weapon() {}

    Weapon(string type, int damage)
    {
        this->type = type;
        this->damage = damage;
    }
};

#endif // WEAPON_H_INCLUDED
