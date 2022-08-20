#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm() : Form("", "", 42, 42){};

public:
    ShrubberyCreationForm(const string &Target);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    static Form *create(const string&target);
    

};
#endif