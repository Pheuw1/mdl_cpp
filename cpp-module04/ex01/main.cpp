#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define MAX_ANIMALS 10

int main(void)
{
	////////////////////////////////
	// First part (Normal + brain) //
	////////////////////////////////
	std::cout << "-----------------------------" << std::endl <<
		"First part (Normal + Brain)" << std::endl << "-----------------------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	/////////////////////////////////
	// Second part (Array + brain) //
	/////////////////////////////////
	std::cout << "-----------------------------" << std::endl <<
		"Second part (Array + brain)" << std::endl << "-----------------------------" << std::endl;
	const Animal* animal[MAX_ANIMALS];

	for (size_t i = 0; i < MAX_ANIMALS; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for (size_t i = 0; i < MAX_ANIMALS; i++)
		delete animal[i];
	///////////////////////////////
	// Third part (Copy + brain) //
	///////////////////////////////
	std::cout << "-----------------------------" << std::endl <<
		"Third part (Copy + brain (by mrosario xd))" << std::endl << "-----------------------------" << std::endl;
	const Animal * dog2 = new Dog();
	const Animal * dog1 = new Dog(*(static_cast<Dog const *>(dog2)));

	delete dog2;
	delete dog1;

	//////////////////////////////////////////
	// Third part (Copy + brain (by me xd)) //
	//////////////////////////////////////////
	Dog	dog;
	Cat	cat;

	Dog dogReplica(dog);
	Cat catReplica(cat);
	std::cout << "The type of dog is:\t\t" << dog.getType() << std::endl;
	std::cout << "The type of dogReplica is:\t" << dogReplica.getType() << std::endl;
	return (0);
}