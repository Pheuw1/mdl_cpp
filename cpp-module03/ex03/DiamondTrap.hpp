#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :   public ScavTrap,   public FragTrap
{
private:
    std::string Name;
    using FragTrap::HP;
    using ScavTrap::EP;
    using FragTrap::AD;

public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& a);
    virtual ~DiamondTrap();


    const std::string& getPairentName(void) const;
    void attack(std::string const &);
    void whoAmI();
};

#endif