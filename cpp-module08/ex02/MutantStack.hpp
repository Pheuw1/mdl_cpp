#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <bits/stdc++.h>
using namespace std;

template<typename T>
class MutantStack: public stack<T>
{
public:
    typedef  std::deque<int, std::allocator<int> >::iterator iterator;
    MutantStack():stack<T>(){}
    MutantStack(MutantStack<T> &&m): stack<T>(m){}
    MutantStack(const MutantStack<T> &m): stack<T>(m){}
    MutantStack<T> &operator=(MutantStack<T> &&m) {this->c = m.c;}
    MutantStack<T> &operator=(const MutantStack<T> &m) {this->c = m.c;}
    virtual ~MutantStack(){};
    iterator begin() { return this->c.begin(); }
    iterator end()   { return this->c.end(); }

};



#endif // !SPAN_H
