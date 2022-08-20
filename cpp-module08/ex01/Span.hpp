#ifndef SPAN_H
#define SPAN_H
#include <bits/stdc++.h>
using namespace std;

class Span
{
public:
    Span(int);
    Span(Span &&);
    Span(const Span &);
    Span &operator=(Span &&);
    Span &operator=(const Span &);
    ~Span();
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    size_t size();
    class CapacityReached : exception
    {
        const char * what() const throw()
        {
            return ("Unable to add element. Capacity reached\n");
        }
    };

    class NoSpanCanBeFound : exception
    {
        const char * what() const throw()
        {
            return ("No elements present in Span. No span can be found\n");
        }
    };

    template<typename iter>
    inline void addNumber(iter first, iter last)
    {
        if (span.size() + distance(first, last) > max)
            throw CapacityReached();
        span.insert(first, last);
    }

    void print_elems();
private:
    size_t max;
    set <int, greater<int>> span;
};


#endif // !SPAN_H
