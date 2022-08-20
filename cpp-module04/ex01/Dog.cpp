#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    sound = "bark";
    brain = new Brain;
}

Dog::Dog(const Dog &dog)
{
	this->brain = new Brain(*(dog.brain));
	this->type = "Dog";
}
Dog::~Dog()
{
    delete brain;
}
