#include <iostream>
#include <algorithm> 
#include <string>  

using namespace std;

int main(int ac, char **av)
{
    string str;

    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else {
        for (int i = 1; i < ac; i++) {
            for (int j = 0; av[i][j]; j++)
                cout << (char)toupper(av[i][j]);
            cout << '\n';
        }
    }
    return 0;
}