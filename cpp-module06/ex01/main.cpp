#include "Data.hpp"

int main(void)
{
	Data file;

	file.name = "cpp_module_06/ex01";
	file.content = "Write a program to test that your functions works as expected. You must create a non-empty (it means it has data members) Data structure. Use serialize() on the address of the Data object and pass its return value to deserialize(). Then, ensure the return value of deserialize() compares equal to the original pointer.";
    file.creationTime = time(0);

	uintptr_t out = serialize(&file);
	Data *data = deserialize(out);

	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Content: " << data->content << std::endl;
	std::cout << "CreationTime: " << data->creationTime << std::endl;
}
