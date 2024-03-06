#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
    this->Name = Name;
}

Zombie::~Zombie()
{
    std::cout << Name << ": " << "The zombie has been destroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << Name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
