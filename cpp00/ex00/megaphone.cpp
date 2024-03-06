#include <iostream>

int main(int ac, char **av)
{
    int i = 1, j;

    if (ac < 2)
    {
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if(av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            std :: cout << av[i][j];
            j++;
        }
        std :: cout << " ";
        i++;
    }
    std :: cout << "\n";
    return(0);
}