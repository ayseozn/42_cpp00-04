#include "Weapon.hpp"

void    Weapon::setType(std::string Type)
{
    type = Type;
}

const std::string    &Weapon::getType()
{
    return(type);
}

Weapon::Weapon(std::string Type)
{
    type = Type;
}
