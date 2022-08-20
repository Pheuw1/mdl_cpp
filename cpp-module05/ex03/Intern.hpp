#ifndef INTERN_H
#define INTERN_H
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <bits/stdc++.h>
using namespace std;
class Intern
{
public:
    Intern();
    Intern(Intern &&) = default;
    Intern(const Intern &) = default;
    Intern &operator=(Intern &&) = default;
    Intern &operator=(const Intern &) = default;
    ~Intern();
    Form *makeForm(const string &, const string &);
    map <string ,typeof(&ShrubberyCreationForm::create)> form_lookup;

private:

    class NOFORMFOUND : public exception
    {
    	public:
		const char *what() const throw()
		{
			return ("No such Form found\n");
		}
    };

    
};


#endif