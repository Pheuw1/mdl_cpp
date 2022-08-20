#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::~Form()
{}

Form::Form(const string  &target, const string &name, int signGrade, int execGrade)
:Target(target), Name(name), sign_grade(signGrade), exec_grade(execGrade)
{}

Form &Form::operator=(const Form &f)
{
    Name = f.getName();
    sign_grade = f.getSGrade();
    exec_grade = f.getEGrade();
    Signed = f.getSigned();
    return (*this);
}

Form::Form(Form const &f)
:Name(f.getName())
,sign_grade(f.getSGrade())
,exec_grade(f.getEGrade())
,Signed(f.getSigned())
{}

string Form::getName() const
{
    return Name;
}
string Form::getTarget() const
{
    return Target;
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

int Form::beSigned(Bureaucrat const &b)
{
    
    try 
{       if (b.getGrade() > this->getEGrade() || b.getGrade() > this->getSGrade())
            throw Form::GradeTooLowException();
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


void Form::checkGrades(const Bureaucrat &b) const
{
    if (!Signed)
        throw NotSignedException();
    if (b.getGrade() > sign_grade || b.getGrade() > exec_grade)
        throw GradeTooLowException();


}

