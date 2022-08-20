#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    sound = "moew";
    brain = new Brain;
}

Cat::Cat(const Cat &cat)
{
	this->brain = new Brain(*(cat.brain));
	this->type = "Cat";
}

Cat::~Cat()
{
    delete brain;
}

