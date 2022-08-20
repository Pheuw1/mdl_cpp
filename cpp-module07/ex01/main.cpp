#include "iter.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fstring(char &s)
{
    s = rand()%(120 - 40 + 1) + 40;
}

void fint(int &n)
{
    n = rand()%(1000);
}

void ffixed(Fixed &f)
{
   f = Fixed(static_cast <float> (rand()) / static_cast <float> (RAND_MAX));
}

int main( void ) {
    int arr[10];
    char * a = strdup("10 chars!");
    Fixed f[10];
    
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {   arr[i] = i;
        f[i] = Fixed(i);
    }
    cout << a << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "|";
    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << f[i] << "|";
    cout << endl;
    iter(a, 10, fstring);
    iter(arr, 10, fint);
    iter(f, 10, ffixed);
    cout << a << endl;
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "|";
    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << f[i] << "|";
    cout << endl;
    
    
    free(a);
}