#ifndef FORM_H
#define FORM_H
#include <bits/stdc++.h>
using namespace std;

class Bureaucrat;
class Form
{
public:
    Form(string, int, int);
    Form(Form &);
    Form(const Form &);
    Form &operator=(const Form &);
    ~Form() = default;
    string getName() const;
    int getSGrade() const;
    int getEGrade() const;
    bool getSigned() const;
    int beSigned(Bureaucrat &b); 
	class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what(void) const throw();
	};

private:
    string Name;
    int sign_grade;
    int exec_grade;
    bool  Signed;

};

ostream &operator<<(ostream &os, const Form &);

#endif