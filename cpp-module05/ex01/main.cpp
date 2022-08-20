
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat human("Olivia", 3);
    std::cout << human << std::endl;
    Form project1("project 1", 3, 3);
    project1.beSigned(human);
    human.signForm(project1);
    cout << project1 << endl;

    try
    {   Bureaucrat human2("Robert", 3);
    std::cout << human2 << std::endl;
    Form project2("project 2", 3, 2);
    project2.beSigned(human2);
    human2.signForm(project1);
    cout << project2 << endl;
    }
    catch (exception &e)
    {
        cout << e.what();
    }
	return (0);
}