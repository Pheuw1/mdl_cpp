#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"
class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm() : Form("", "", 42, 42){};
public:
    RobotomyRequestForm(const string &Target);
    RobotomyRequestForm(RobotomyRequestForm &&);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    static Form *create(const string&target);
};


#endif