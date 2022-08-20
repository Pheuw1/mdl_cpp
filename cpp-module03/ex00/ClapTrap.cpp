#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name)
:Name(name),HP(10),EP(10),AD(0)
{
    cout << "constructor called" << endl;
}

ClapTrap::ClapTrap()
:Name("NoName"),HP(10),EP(10),AD(0)
{
    cout << "constructor called" << endl;
}


ClapTrap::~ClapTrap()
{
    cout << "destructor called" << endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HP > 0 && EP > 0)
    {
        cout << "ClapTrap " << Name << " attacks " <<  target <<", causing " <<  AD << " points of damage!" << endl;
        EP--;
    }
    else if (HP <= 0)
         cout << "ClapTrap " << Name << " has no hit points left!" << endl; 
    else if (EP <= 0)
        cout << "ClapTrap " << Name << " has no energy points left!" << endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HP > 0)
    {
        cout << "ClapTrap " << Name << " takes " << amount <<  " points of damage!" << endl;
        HP -= amount;
    }
    else
        cout << "ClapTrap" << Name << "Is already dead but it's corpse still takes " << amount <<  " points of damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HP > 0 && EP > 0)
    {
        cout << "ClapTrap " << Name << " repairs himself, which resotres " <<  amount << " hit points!" << endl;
        EP--;
    }
    else if (HP <= 0)
         cout << "ClapTrap " << Name << " has no hit points left!" << endl; 
    else if (EP <= 0)
        cout << "ClapTrap " << Name << " has no energy points left!" << endl; 
}
