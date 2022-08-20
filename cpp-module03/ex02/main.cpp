#include "FragTrap.hpp"

int main()
{
    FragTrap a;
    std::cout << "hitpoints: " << a.get_HP() << std::endl;
    std::cout << "energyPoints: " << a.get_EP() << std::endl;
    std::cout << "attackDamage: " << a.get_AD() << std::endl;
    a.takeDamage(3);
    FragTrap b(a);
    b.takeDamage(3);
    FragTrap c;
    c = b;
    b.takeDamage(3);
    FragTrap d("crap");
    d.attack("tag");
    d.takeDamage(4);
    d.beRepaired(10);
    d.highFivesGuys();
}