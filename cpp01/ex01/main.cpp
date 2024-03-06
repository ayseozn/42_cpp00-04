#include "Zombie.hpp"

void    test(int N, Zombie *zombie)
{
    int i = 0;
    while(i < N)
    {
        zombie[i].announce();
        i++;
    }
}

int main()
{
    Zombie *zombie = zombieHorde(5, "ayse");

    test(5, zombie);
    delete[] zombie;
}
