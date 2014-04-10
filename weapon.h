#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
    string type;
    int damage;
public:

    Weapon() {}
    ~Weapon()
    {
        cout<<"Destructor called"<<endl;
    }

    Weapon(string type, int damage)
    {
        this->type = type;
        this->damage = damage;
    }

    /** GETTERS */
    string getType() const
    {
        return this->type;
    }
};

#endif // WEAPON_H_INCLUDED
