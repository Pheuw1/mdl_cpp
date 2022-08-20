#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	srand(time(NULL));

	Bureaucrat Louis("Louis", 1);
	Bureaucrat wrong("wrong", 150);

	ShrubberyCreationForm form1("target");
	RobotomyRequestForm form2("target");
	PresidentialPardonForm form3("target");
    wrong.signForm(form1);
    wrong.signForm(form2);
    wrong.signForm(form3);


	test_form(form1, Louis, wrong);
	test_form(form2, Louis, wrong);
	test_form(form3, Louis, wrong);
    Louis.signForm(form1);
    Louis.signForm(form2);
    Louis.signForm(form3);
    test_form(form1, Louis, wrong);
	test_form(form2, Louis, wrong);
	test_form(form3, Louis, wrong);
    return 0;

}