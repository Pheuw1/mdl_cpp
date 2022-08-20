#include "easyfind.hpp"

int main()
{
    vector <int> vec = {0,1,2,3,4,5,6,7,8,9};

	try
	{
		std::cout << easyfind(vec, 1)[0] << std::endl;
		std::cout << find(vec.begin(), vec.end(), 1)[0] << std::endl;
		std::cout << easyfind(vec, 10)[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


}