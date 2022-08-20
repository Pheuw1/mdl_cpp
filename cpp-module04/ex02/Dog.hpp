#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal
{
public: 
    Dog();
    Dog(const Dog &);
    Dog &operator=(Dog &&) = default;
    Dog &operator=(const Dog &) = default;
    ~Dog();

private:
    Brain *brain;
};
#endif // !DOG_H