//header


#include "Loser.hpp"

int main (int ac, char **av)
{
    if (ac != 4 || !av[1][0] || !av[2][0] || !av[3][0])
    {
        std::cout << "Provide correct arguments!"<< std::endl;
        return (1);
    }
    Loser loser (av[1]);
    loser.replace(av[2], av[3]);
    return (0);
}