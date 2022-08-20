#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <algorithm> 
#include <string>  
#include <vector>
using namespace std;
class Zombie
{
public:
    Zombie(string name);
    Zombie();
    ~Zombie();
    void announce( void ); 
    string name;
};
Zombie  *newZombie(std::string name);  
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif