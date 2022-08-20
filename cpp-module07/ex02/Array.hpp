#ifndef ARRAY_H
#define ARRAY_H
#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Array
{
private:
    T *Arr;
    size_t len; 
    
public:

    Array()
    :len(0)
    {
        Arr = new T [0];
    }

    ~Array()
    {
        delete[] this->Arr; 
    }  

    size_t size() const
    {
        return len;
    }

        Array(unsigned int n)
    :len(n)
    {
        Arr = new T[n];
    }

    T operator[](int i) const
    {
        if (i < 0 || i >= static_cast<int>(this->len))
			throw Array::OutOfRangeException();
		return this->Arr[i];
    }

    T &operator[](int i)
	{
		if (i < 0 || i >= static_cast<int>(this->len))
			throw Array::OutOfRangeException();
		return this->Arr[i];
	}


    Array(const Array &other)
    {
		this->Arr = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			this->Arr[i] = other[i];
    }

    Array <T>&operator=(const Array &other)
    {
        if (this != &other)
		{
			this->~Array();
			this->len = other.size();
			this->Arr = new T[other.size()];
			for (unsigned int i = 0; i < other.size(); i++)
				this->Arr[i] = other[i];
		}
		return *this;
    }

    class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};

};
#endif // !ARRAY_H