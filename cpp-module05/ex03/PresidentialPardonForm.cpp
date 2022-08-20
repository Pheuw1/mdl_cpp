#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string &Target)
:Form(Target, "PresidentialPardonForm", 25 , 5)
{}

PresidentialPardonForm:: ~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    this->checkGrades(executor);    
    cout << this->getTarget() <<  " has been pardoned by Zaphod Beeblebrox." << endl;  
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s)
:Form(s)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &s)
{
	this->Form::operator=(s);
	return (*this);
}



Form    *PresidentialPardonForm::create(const string&target)
{
    return new PresidentialPardonForm(target);
}