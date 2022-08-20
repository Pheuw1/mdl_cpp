#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b("bname", 1);
        Bureaucrat c("cname", 75);
        Bureaucrat a("aname", -25);
        Bureaucrat d("dname", 150);
        // Bureaucrat e("ename", 151);
        // b.IncreaseGrade();
        // d.DecreaseGrade();
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}