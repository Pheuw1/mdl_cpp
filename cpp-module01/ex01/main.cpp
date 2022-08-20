#include <iostream>
#include <algorithm> 
#include <string>  
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int count = 3;
	
	horde = zombieHorde(count, "monster");
	for(int i=0; i<count; i++)
		horde->announce();
	delete[] horde;

	return (0);
}