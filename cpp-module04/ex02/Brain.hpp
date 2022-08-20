#ifndef BRAIN_H
#define BRAIN_H
#include <bits/stdc++.h>
using namespace std;
class Brain
{
public:
    Brain();
    Brain(const Brain &);
    Brain &operator=(Brain &&) = default;
    Brain &operator=(const Brain &) = default;
    ~Brain();
    string ideas[100];
private:
    
};

#endif