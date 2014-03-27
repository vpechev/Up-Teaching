#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include <string>

using namespace std;

class Weapon
{
private:
    string type;
    int damage;
public:

    Weapon() {}

    Weapon(string type, int damage)
    {
        this->type = type;
        this->damage = damage;
    }
};

#endif // WEAPON_H_INCLUDED
