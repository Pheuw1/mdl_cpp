#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm:  public Form
{
private:
	PresidentialPardonForm() : Form("", "", 42, 42){};
public:
    PresidentialPardonForm(const string &Target);
    PresidentialPardonForm(PresidentialPardonForm &&);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);
    ~PresidentialPardonForm();
    virtual void execute(Bureaucrat const & executor) const;
};

#endif