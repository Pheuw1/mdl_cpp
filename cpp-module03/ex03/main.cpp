#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    std::cout << "name: " << a.get_name() << std::endl;
    std::cout << "hitpoints: " << a.get_HP() << std::endl;
    std::cout << "energyPoints: " << a.get_EP() << std::endl;
    std::cout << "attackDamage: " << a.get_AD() << std::endl;
    a.takeDamage(3);
    DiamondTrap b(a);
    b.takeDamage(3);
    DiamondTrap c;
    c = b;
    b.takeDamage(3);

    DiamondTrap d("crap");
    d.attack("tag");
    d.takeDamage(4);
    d.beRepaired(10);
    d.highFivesGuys();
    d.guardGate();
    d.whoAmI();
}