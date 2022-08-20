#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
        cout << "log level parameter required\n";
    else
        harl.print_above_levels(string(av[1]));
    return (0);
}