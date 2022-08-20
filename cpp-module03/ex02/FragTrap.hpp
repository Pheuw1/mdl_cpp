#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& a);
    virtual ~FragTrap();

    FragTrap& operator=(const FragTrap& a);

    void highFivesGuys(void);
};

#endif