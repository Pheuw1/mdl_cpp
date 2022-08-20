#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>
#include <exception>

class Form;
using namespace std;
class Bureaucrat
{
private:
    int Grade;
    string Name;

public:
    Bureaucrat(string name, int grade);
    ~Bureaucrat() = default;
    Bureaucrat(Bureaucrat &);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator=(const Bureaucrat &);
    string getName() const;
    int getGrade() const;
    void setGrade(int grade);
	void signForm(Form &f);
	class GradeTooHighException : public std::exception {
	public:
		const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what(void) const throw();
	};
    void IncreaseGrade();
    void DecreaseGrade();

    
};
ostream &operator<<(ostream &os, const Bureaucrat &);


#endif