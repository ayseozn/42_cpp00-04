#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "DEBUG: "<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "INFO: " << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "WARNING: " << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "ERROR: " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int lvl(std::string level)
{
    std::string arg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == arg[i])
            return(i);
    }
    return(5);
}

void    ft_default()
{
    std::cout << "" << std::endl;
}

void    Harl::complain(std::string level)
{
    switch(lvl(level))
    {
        case 0:
            Harl::debug();
            break;
        case 1:
            Harl::info();
            break;
        case 2:
            Harl::warning();
            break;
        case 3:
            Harl::error();
            break;
        default:
            ft_default();
            break;
    }
}
