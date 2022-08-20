#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name)
:Name(name),HP(10),EP(10),AD(0),TrapType("ClapTrap")
{
    cout << "ClapTrap " << "constructor called" << endl;
}

ClapTrap::ClapTrap()
:Name("NoName"),HP(10),EP(10),AD(0),TrapType("ClapTrap")
{
    cout << "ClapTrap " << "constructor called" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "ClapTrap "  << "destructor called" << endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HP > 0 && EP > 0)
    {
        cout << TrapType << " "  << Name << " attacks " <<  target <<", causing " <<  AD << " points of damage!" << endl;
        EP--;
    }
    else if (HP <= 0)
         cout << TrapType << " "  << Name << " has no hit points left!" << endl; 
    else if (EP <= 0)
        cout << TrapType << " "  << Name << " has no energy points left!" << endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HP > 0)
    {
        cout << TrapType << " "  << Name << " takes " << amount <<  " points of damage!" << endl;
        HP -= amount;
    }
    else
        cout << TrapType << " "  << Name << "Is already dead but it's corpse still takes " << amount <<  " points of damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HP > 0 && EP > 0)
    {
        cout << TrapType << " "  << Name << " repairs himself, which resotres " <<  amount << " hit points!" << endl;
        EP--;
    }
    else if (HP <= 0)
         cout << TrapType << " "  << Name << " has no hit points left!" << endl; 
    else if (EP <= 0)
        cout << TrapType << " "  << Name << " has no energy points left!" << endl; 
}


string  ClapTrap::get_name() const
{
    return(Name);
}
int     ClapTrap::get_HP() const
{
    return(HP);
}
int     ClapTrap::get_EP() const
{
    return(EP);
}
int     ClapTrap::get_AD() const
{
    return(AD);
}