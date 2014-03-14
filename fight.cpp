#include "hero.h"
#include "orc.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class Fight
{
public:
    Hero hero;
    Orc orc;
    int turn;

    Fight() {}

    Fight(Hero hero, Orc orc)
    {
        srand((unsigned)time(0));
        int randomN = (rand()%100) + 1;
        if(randomN <= 50)
            turn = 0;
        else
            turn = 1;
        this->hero = hero;
        this->orc = orc;

    }

    void simulateFight()
    {
        if(!hero.isAlive() || !orc.isAlive())
        {
            cout<<"Ne moje da se izpalni simulaciqta"<<endl;
        }

        while(1)
        {
            if(turn == 0)
            {
                cout<<hero.name<<" takes turn"<<endl;
                if(!orc.isAlive())
                {
                    cout<<hero.name<<" is winner!"<<endl;
                    break;
                }
                cout<<hero.name<<" is attacking "<<orc.name<<" with ";
                cout<<hero.weapon.type<<endl;
                cout<<" and dealth "<<hero.attack()<<" damage"<<endl;
                orc.takeDamage(hero.attack());
                turn = 1;
            }
            if(turn == 1)
            {
                cout<<orc.name<<" takes turn"<<endl;
                if(!hero.isAlive())
                {
                    cout<<orc.name<<" is winner!"<<endl;
                    break;
                }
                cout<<orc.name<<" is attacking "<<orc.name<<" with ";
                cout<<orc.weapon.type<<endl;
                cout<<" and dealth "<<orc.attack()<<" damage"<<endl;
                hero.takeDamage(orc.attack());
                turn = 0;
            }
        }
    }
};
