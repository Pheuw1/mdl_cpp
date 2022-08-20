#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal
{
public: 
    Dog();
    Dog(Dog &&) = default;
    Dog(const Dog &) = default;
    Dog &operator=(Dog &&) = default;
    Dog &operator=(const Dog &) = default;
    ~Dog();

private:
};
#endif // !DOG_H