#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string Type);
    void    setType(std:: string Type);
    const std::string &getType();
};

#endif
