#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< TrapType << " " << "constructor called" << std::endl;
    HP = 100;
    EP = 50;
    AD = 20;
    TrapType = "ScavTrap";
}

ScavTrap::ScavTrap(const std::string& name)
{
    std::cout << TrapType << " " << "constructor called" << std::endl;
    this->Name = name;
    HP = 100;
    EP = 50;
    AD = 20;
    TrapType = "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap& a)
{
    TrapType = "ScavTrap";
    std::cout << TrapType << " " << "copy constructor called" << std::endl;
    *this = a;
}

ScavTrap::~ScavTrap()
{
    std::cout << TrapType << " " <<  "destructor of " << Name << " called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
{
    Name = a.get_name();
    HP = a.get_HP();
    EP = a.get_EP();
    AD = a.get_AD();
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << TrapType << " " << Name << " is now in Gate keeper mode" << std::endl;
}

