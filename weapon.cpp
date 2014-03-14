#include <string>

using namespace std;

class Weapon
{
public:

    string type;
    float damage;
    float criticalChance;

    Weapon() {}

    Weapon(string type, float damage, float critChance)
    {
        this->type = type;
        this->damage = damage;
        this->criticalChance = critChance;
    }

    bool criticalHit()
    {
        return criticalChance == 1;
    }
};
