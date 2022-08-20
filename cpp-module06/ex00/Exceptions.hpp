#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <bits/stdc++.h>
using namespace std;

class NonDisplayable: public exception
{
public:
    const char * what() const throw()
    {
        return "Non Displayable\n";
    }
};

class Impossible: public exception
{
public:
    const char * what() const throw()
    {
        return "Impossible Conversion\n";
    }
};

class isNanf: public exception
{
public:
    const char * what() const throw()
    {
        return "Nanf\n";
    }
};

class isNan: public exception
{
public:
    const char * what() const throw()
    {
        return "Nan\n";
    }
};

class ispInf: public exception
{
public:
    const char * what() const throw()
    {
        return "+inf\n";
    }
};

class isnInf: public exception
{
public:
    const char * what() const throw()
    {
        return "-inf\n";
    }
};

class ispInff: public exception
{
public:
    const char * what() const throw()
    {
        return "+inff\n";
    }
};

class isnInff: public exception
{
public:
    const char * what() const throw()
    {
        return "-inff\n";
    }
};
#endif // !Exceptions
