#include "Span.hpp"

int main()
{

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    cout << sp.shortestSpan() << endl;
    cout << sp.longestSpan() << endl;
    Span sp2 = Span(20);
    vector<int> v(20);
    iota(v.begin(), v.end(), 0);
    sp2.addNumber(v.begin(), v.end());
    cout << sp2.shortestSpan() << endl;
    cout << sp2.longestSpan() << endl;
    sp2.print_elems();
    cout << sp2.size() << endl;
    sp2 = sp;
    cout << sp2.size() << endl;
    Span sp3(sp2);
    cout << sp3.size() << endl;
    return 0;

}