#include "Exceptions.hpp"

int ltoi(const string &s)
{
    try {
        return stoi(s);
    } catch (exception &e)
    {
        throw Impossible();
    }
}

char ltoc(const string &s)
{
    int c;

    try {
        c  = stoi(s);
		if (c < 0 || c > 255)
            throw Impossible();
    } catch (...)
    {
            throw Impossible();
    }
    if (!isprint(c))
        throw NonDisplayable(); 
    return ((char)c);

}

float ltof(const string &s)
{
    try {
        return (stof(s));
    } catch (exception &e)
    {
        throw Impossible();
    }
}

double ltod(const string &s)
{
    try {
        return (stod(s));
    } catch (exception &e)
    {
        throw Impossible();
    }
}

int main(int ac, char **av)
{
    int n;
    char c;
    float f;
    double d;
    if (ac != 2)
    {cout << "A single argument is required" << endl;}
    else
    {
        try {
            cout << "char: ";
            c = ltoc(av[1]);
            cout << "'" << c << "'" << endl;
        } catch (exception &e) {
            cout << e.what();
        }
        try {
            cout << "int: ";
            n = ltoi(av[1]);
            cout << n << endl;
        } catch (exception &e) {
            cout << e.what();
        }
        try {
            cout << "float: ";
            f = ltof(av[1]);
            if (isnan(f))
                throw isNanf();
            if (isinf(f) && f > 0)
                throw ispInff();
            if (isinf(f) && f < 0)
                throw isnInff();
            string str = f == (int)f ? ".0" : "";
            cout << f << str << "f"<< endl;
          
        } catch (exception &e) {
            cout << e.what();
        }
        try {
            cout << "double: ";
            d = ltod(av[1]);
            if (isnan(d))
                throw isNan();
            if (isinf(f) && f > 0)
                throw ispInf();
            if (isinf(f) && f < 0)
                throw isnInf();
            string str = d == (int)d ? ".0" : "";
            cout << d << str << endl;
        } catch (exception &e) {
                cout << e.what();
        }
    }
    return 0;
}