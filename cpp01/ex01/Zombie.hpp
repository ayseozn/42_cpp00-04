#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string Name;
public:
    void setZombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );


#endif
