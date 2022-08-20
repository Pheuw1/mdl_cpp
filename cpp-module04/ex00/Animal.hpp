#ifndef ANIMAL_H
#define ANIMAL_H
#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    Animal();
    Animal(Animal &&) = default;
    Animal(const Animal &) = default;
    Animal &operator=(Animal &&) = default;
    Animal &operator=(const Animal &) = default;
    ~Animal();  
    void makeSound() const;
    string getType() const;
    string sound;
    
protected:
    string type;
};
#endif