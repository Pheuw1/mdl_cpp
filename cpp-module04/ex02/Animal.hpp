#ifndef ANIMAL_H
#define ANIMAL_H
#include <bits/stdc++.h>
#include "Brain.hpp"
using namespace std;

class Animal
{
public:
    void makeSound() const;
    string getType() const;
    string sound;
    
protected:
    ~Animal();  
    Animal();
    string type;
};
#endif