#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        return NULL;
    Zombie * zombs = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombs[i].name = name;
    return (zombs);
}   

Zombie::Zombie(string name)
:name(name)
{
    cout << name << " rises from the dead" <<'\n';
}

Zombie::Zombie()
:name("")
{}

Zombie::~Zombie()
{
    cout << name << " destroyed" << '\n';
}

Zombie *newZombie(string name)
{
    return new Zombie(name);
}

void Zombie::announce( void )
{
    cout << name << ":  BraiiiiiiinnnzzzZ..." << '\n';
}

void randomChump(std::string name)
{
    Zombie zomb = Zombie(name);
    zomb.announce();
}