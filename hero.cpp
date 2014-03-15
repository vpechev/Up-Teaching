#include <string>
#include "entity.h"

using namespace std;

class Hero : public Entity
{
private:
    string nickname;
    int tt;

public:
    Hero() {}

    Hero(string name, string nickname, int health) : Entity(name, health)
    {
        this->nickname = nickname;
    }
};
