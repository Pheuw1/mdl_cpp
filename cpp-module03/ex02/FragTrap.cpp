#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
    TrapType = "FragTrap";
    std::cout<< TrapType << " " << "constructor called" << std::endl;
    HP = 100;
    EP = 100;
    AD = 30;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap" << " " << "destructor called" << std::endl;

}


FragTrap::FragTrap(const std::string& name)
{
    Name = name;
    std::cout << TrapType << " " << "constructor called" << std::endl;
    HP = 100;
    EP = 100;
    AD = 30;
    TrapType = "FragTrap";
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
    Name = a.get_name();
    HP = a.get_HP();
    EP = a.get_EP();
    AD = a.get_AD();
    return *this;
}

FragTrap::FragTrap(const FragTrap& a)
{   
    TrapType = "FragTrap";
    std::cout << TrapType << " " << "copy constructor called" << std::endl;
    *this = a;

}

void FragTrap::highFivesGuys(void)
{
    std::cout << TrapType << " " << "Yo what'r you square-queer's doin', having a gay lunch? You gotta get vertical not horizontal, my fukken mulatto's. You wanna do the horizontal hokey-pokey on a couple of freshman 15's in the quad? High five!" << endl;
}