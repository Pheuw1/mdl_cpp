#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("name");
    std::cout << "hitpoints: " << a.get_HP() << std::endl;
    std::cout << "energyPoints: " << a.get_EP() << std::endl;
    std::cout << "attackDamage: " << a.get_AD() << std::endl;
    a.takeDamage(3);
    ScavTrap b(a);
    b.takeDamage(3);
    ScavTrap c;
    c = b;
    b.takeDamage(3);
    ScavTrap d("crap");
    d.takeDamage(4);
    d.beRepaired(10);
    d.guardGate();
    d.attack("tag");
}