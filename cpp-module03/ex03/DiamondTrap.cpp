
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("no name_clap_name")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), Name(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& a)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = a;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor of " << Name << " called" << std::endl;
}


void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << Name << \
                 ", my parent is called" << ClapTrap::get_name() << std::endl;
}