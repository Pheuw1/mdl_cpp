#ifndef EASYFIND_H
#define EASYFIND_H
#include <bits/stdc++.h>
using namespace std;

class VALUENOTFOUND: exception
{
    const char * what() const throw()
    {
        return "Value not found\n";
    }
};

template <class T> typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator iter = find(container.begin(),container.end(), n);
    if (iter == container.end())
        throw VALUENOTFOUND();
    return iter;
}


#endif