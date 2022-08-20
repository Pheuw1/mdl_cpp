#include <iostream>
#include <algorithm> 
#include <string>  
#include <vector>
using namespace std;

int main()
{
    string str = "HI THIS IS BRAIN";
    string &str_ref = str;
    string *str_ptr = &str;

    cout << "address of string :" << &str << '\n';
    cout << "address held by ptr :" << str_ptr << '\n';
    cout << "adfress held by ref :" << &str_ref << '\n';
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "value of string :" << str << '\n';
    cout << "value pointed to by string ptr :" << *str_ptr << '\n';
    cout << "value pointed to by string ref :" << str_ref << '\n';
    return (0);
}