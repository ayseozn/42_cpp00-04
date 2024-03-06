#include "Zombie.hpp"

int main()
{
    Zombie *zmb = newZombie("ayse");
    zmb->announce();

    randomChump("ozen");

    delete(zmb);
    return(0);
}
