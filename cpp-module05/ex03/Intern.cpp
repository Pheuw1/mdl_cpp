#include "Intern.hpp"

Intern::Intern()
{
    form_lookup.insert({"ShrubberyCreationForm", &ShrubberyCreationForm::create});
    form_lookup.insert({"RobotomyRequestForm", &RobotomyRequestForm::create});
    form_lookup.insert({"PresidentialPardonForm", &PresidentialPardonForm::create});
}

Intern::~Intern()
{}

Form    *Intern::makeForm(const string &name, const string &target)
{

    if (form_lookup.find(name) == form_lookup.end())
        throw Intern::NOFORMFOUND();
    cout << "Form " << name << " was made." << endl;
    return (form_lookup[name](target));
}