#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
:sound("WRONG"),type("WrongAnimal")
{}

void WrongAnimal::makeSound() const
{
    cout << sound << endl;
}

WrongAnimal::~WrongAnimal()
{}

string WrongAnimal::getType() const
{
    return type;
}