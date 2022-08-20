#ifndef FORM_H
#define FORM_H
#include <bits/stdc++.h>
using namespace std;
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
	string Target;
	string Name;
	int sign_grade;
	int exec_grade;
	bool Signed;
	Form() : Target(""), Name(""), sign_grade(42), exec_grade(42){};

public:
	Form(const std::string &target, const std::string &name, int signGrade, int execGrade);
	Form(Form const &other);
	Form &operator=(Form const &other);
	virtual ~Form();
    void checkGrades(const Bureaucrat &b) const;
    string getName() const;
    string getTarget() const;
    int getSGrade() const;
    int getEGrade() const;
    bool getSigned() const;

	int beSigned(Bureaucrat const &bureaucrat);

	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Grade too low\n");
		}
	};

	class NotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Not signed\n");
		}
	};
    class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw()
        {
			return ("Grade too high\n");

        }
	};
};

std::ostream &operator<<(std::ostream &os, Form const &form);



ostream &operator<<(ostream &os, const Form &);

#endif