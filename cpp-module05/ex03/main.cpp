#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern Ned;
	Bureaucrat Admin("Fred", 1);
	try
	{
		Form *a = Ned.makeForm("RobotomyRequestForm", "target");
		Admin.signForm(*a);
		Admin.executeForm(*a);
		a = Ned.makeForm("PresidentialPardonForm", "target");
		Admin.signForm(*a);
		Admin.executeForm(*a);
		a = Ned.makeForm("ShrubberyCreationForm", "target");
		Admin.signForm(*a);
		Admin.executeForm(*a);
		a = Ned.makeForm("wrong", "target");
		Admin.signForm(*a);
		Admin.executeForm(*a);
	}	
	catch (exception& e)
	{
		cout << "Form couldn't be create : "<< e.what() << endl;
	}
    return 0;

}