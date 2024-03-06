#include "Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapoN)
{
    weapon = &weapoN;
}

HumanB::HumanB(std::string Name)
{
    name = Name;
}
