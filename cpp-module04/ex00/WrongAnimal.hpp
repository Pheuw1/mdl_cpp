#ifndef WrongAnimal_H
#define WrongAnimal_H
#include <bits/stdc++.h>
using namespace std;
class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &&) = default;
    WrongAnimal(const WrongAnimal &) = default;
    WrongAnimal &operator=(WrongAnimal &&) = default;
    WrongAnimal &operator=(const WrongAnimal &) = default;
    ~WrongAnimal();  
    void makeSound() const;
    string getType() const;
    string sound;
    
protected:
    string type;
};
#endif