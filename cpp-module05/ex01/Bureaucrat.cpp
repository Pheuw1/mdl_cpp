#include "Bureaucrat.hpp"
#include "Form.hpp"

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
    }
    catch (exception &e)
    {
        throw e;
    }
}


void Bureaucrat::IncreaseGrade()
{
    if (Grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    Grade--;
}
void Bureaucrat::DecreaseGrade()
{
    if (Grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    Grade++;
}

string Bureaucrat::getName() const
{
    return Name;
}

int Bureaucrat::getGrade() const
{
    return Grade;
}

Bureaucrat::Bureaucrat(string name, int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    Name = name;
    Grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
    Name = b.getName();
    Grade = b.getGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    Name = b.getName();
    Grade = b.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    Name = b.getName();
    Grade = b.getGrade();
    return *this;
}

ostream &operator<<(ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

void setGrade(int grade);


const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("[Grade Too High Exception]\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("[Grade Too Low Exception]\n");
}