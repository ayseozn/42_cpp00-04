#pragma once
#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
    Zombie(std::string Name);
    void announce( void );
    ~Zombie();

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
