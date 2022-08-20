#include "Animal.hpp"

Animal::Animal()
:sound(""),type("Animal")
{}

void Animal::makeSound() const
{
    cout << sound << endl;
}

Animal::~Animal()
{}

string Animal::getType() const
{
    return type;
}