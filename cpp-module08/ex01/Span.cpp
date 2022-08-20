#include "Span.hpp"

Span::Span(int const n)
:max(n)
{}

Span::~Span()
{}

Span::Span(Span &&s)
{
   max = s.max;
   span = s.span;
}

Span::Span(const Span &s)
{
   max = s.max;
   span = s.span;
}
Span &Span::operator=(Span &&s)
{
   max = s.max;
   span = s.span;
   return *this;
}
Span &Span::operator=(const Span &s)
{
   max = s.max;
   span = s.span;
   return *this;
}

size_t Span::size()
{
    return span.size();
}



void Span::addNumber(int n)
{
    if (span.size() < max)
       span.insert(n);
    else
        throw CapacityReached();

}

int  Span::shortestSpan()
{
    if (span.empty())
        throw NoSpanCanBeFound();
    int range = abs(*span.end() - *span.begin());
    for (auto i = span.begin(); i != prev(span.end()); i++)
            range = min(range, abs(*next(i) - *i));
    return range;
}

int  Span::longestSpan()
{
    if (span.empty())
        throw NoSpanCanBeFound();
    return (*span.begin() - *prev(span.end()));
}

void Span::print_elems()
{
    for (auto &e : span)
        cout << e << " ";
    cout << endl;
}