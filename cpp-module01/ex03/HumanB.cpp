#include "HumanB.hpp"

void HumanB::attack(void)
{
    if (weapon)
        cout << name << " attacks with their "  << weapon->getType() << '\n';
    else
        cout << name << " attacks with their "  << "fists" << '\n';

}

HumanB::HumanB(string name)
:name(name),weapon(NULL)
{}

void HumanB::setWeapon(Weapon& type) { 
    weapon = &type;
}