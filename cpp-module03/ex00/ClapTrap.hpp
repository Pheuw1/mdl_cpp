#ifndef CLAPTRALP_H
#define CLAPTRALP_H
#include <bits/stdc++.h>
using namespace std;

class ClapTrap
{
public:
    ClapTrap(string);
    ClapTrap();
    ClapTrap(ClapTrap &&) = default;
    ClapTrap(const ClapTrap &) = default;
    ClapTrap &operator=(ClapTrap &&) = default;
    ClapTrap &operator=(const ClapTrap &) = default;
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    string Name;
    int HP;
    int EP;
    int AD;
};
#endif