#include "Zombie.hpp"

using namespace std;

Zombie *get_zombie(string name) {
    Zombie *ptr = newZombie(name);
    ptr->announce();
    return ptr;
}

int main()
{
    Zombie *zomb = get_zombie("Charles");
    zomb->name = "Steven";
    zomb->announce();
    delete zomb;
    return (0);
}