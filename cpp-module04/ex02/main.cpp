#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Dog d; d.makeSound();
	Cat c; c.makeSound();
	//Can't
	// Animal a; a->makeSound();
	// const Animal* na = new Animal();
	// na->makeSound();
	// delete na;
	return (0);
}