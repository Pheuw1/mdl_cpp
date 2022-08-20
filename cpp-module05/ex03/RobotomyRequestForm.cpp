#include "RobotomyRequestForm.hpp"

RobotomyRequestForm:: RobotomyRequestForm(const string &Target)
:Form(Target, "RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm:: ~RobotomyRequestForm()
{}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->checkGrades(executor);
    if (rand() % 2)
        cout << "*drilling noise*" << "\n" << this->getTarget() << " has been robotomized" << endl; 
    else
        cout << "robotomy failed" << endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s)
:Form(s)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &s)
{
	this->Form::operator=(s);
	return (*this);
}

Form    *RobotomyRequestForm::create(const string&target)
{
    return new RobotomyRequestForm(target);
}