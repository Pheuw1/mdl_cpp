#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;
class Weapon
{
public:
	const string& getType(void);
	void setType(string name);

	Weapon(string name);

private:
	string type;
};

#endif