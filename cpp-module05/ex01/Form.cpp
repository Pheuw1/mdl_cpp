#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(string name, int sgrade, int egrade)
:Name(name)
,sign_grade(sgrade)
,exec_grade(egrade)
,Signed(0)
{}

Form::Form(Form &f)
:Name(f.getName())
,sign_grade(f.getSGrade())
,exec_grade(f.getEGrade())
,Signed(f.getSigned())
{}

Form::Form(const Form &f)
:Name(f.getName())
,sign_grade(f.getSGrade())
,exec_grade(f.getEGrade())
,Signed(f.getSigned())
{}

Form &Form::operator=(const Form &f)
{
    Name = f.getName();
    sign_grade = f.getSGrade();
    exec_grade = f.getEGrade();
    Signed = f.getSigned();
    return (*this);
}

string Form::getName() const
{
    return Name;
}
int Form::getSGrade() const
{
    return sign_grade;
}
int Form::getEGrade() const
{
    return exec_grade;
}
bool Form::getSigned() const
{
    return Signed;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("[Grade Too High Exception]\n");
}
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("[Grade Too Low Exception]\n");
}

int Form::beSigned(Bureaucrat &b)
{
    
    try 
{       if (b.getGrade() > this->getEGrade() || b.getGrade() > this->getSGrade())
            throw Form::GradeTooLowException();
        else if (b.getGrade() < this->getEGrade() || b.getGrade() < this->getSGrade())
            throw Form::GradeTooHighException();
        if (this->Signed)
        {cout << this->getName() << " is already signed" << endl; return 0;}
        cout << b.getName() <<  " signed " << this->getName() << endl;
        this->Signed = 1;
        }
    catch (exception &e)
    {cerr << b.getName() <<" couldn't sign " << this->getName() << " because " << e.what();}
    return 1;
}

ostream &operator<<(ostream &os, const Form &f)
{
    os << "Form " << f.getName() <<", "<< f.getSGrade() <<", "<< f.getEGrade() <<", "<< f.getSigned(); 
    return os;
}


