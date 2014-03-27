#include <iostream>
#include "entity.h"
#include "hero.h"
#include "orc.h"
#include "dungeon.h"
#include <vector>

using namespace std;

class B
{
public:

    string lastName;
    B() {}
    B(string name) : lastName(name) {}
    ~B()
    {
        cout<<"Destructor of B "<<this->lastName<<endl;
    }

};

class A
{
public:
    string name;
    B* b;
    A(string name) : name(name)
    {
        b = new B("Stoykov");
    }
    ~A()
    {
        cout<<"Destructor of A "<<this->name<<endl;
        delete b;
    }
};

int main()
{
    A ob("test1");
    int b = 5;

    cout<<"Outside If"<<endl;
    Entity* ent = new Hero("Huko", "Addd", 100);
    ent->equipWeapon(Weapon("sword", 10 , 1));

    return 0;
}
