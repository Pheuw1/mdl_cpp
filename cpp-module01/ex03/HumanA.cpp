#include "HumanA.hpp"

void HumanA::attack(void)
{
    cout << name << " attacks with their "  << weapon->getType() << '\n';
}

HumanA::HumanA(std::string name, Weapon& type)
:name(name), weapon(&type)
{}
