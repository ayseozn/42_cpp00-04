#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << Name << ": "<< "BraiiiiiiinnnzzzZ...." << std::endl;
}

void    Zombie::setZombie(std::string name)
{
    Name = name;
}

Zombie::~Zombie()
{
    std::cout << Name << ": " << "The zombie has been destroyed" << std::endl;
}
