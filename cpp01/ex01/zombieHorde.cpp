#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *zmb = new Zombie[N];

    while (i < N)
    {
        zmb[i].setZombie(name);
        i++;
    }
    return(zmb);
}
