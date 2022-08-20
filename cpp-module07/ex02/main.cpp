#include "Array.hpp"
using namespace std;

int main()
{
    srand(time(0));

    Array<int> int_a(10);
    for (size_t i = 0; i < int_a.size(); i++)
        int_a[i] = rand()%10;
    
    const Array<int> int_b(int_a);    
    Array <string> arr(10);
    for (size_t i = 0; i < 10; i++)
        arr[i] =  "String number " + to_string(i) +  ".";
    
    for (size_t i = 0; i < arr.size(); i++)
        cout << int_a[i] << " | " << int_b[i]  << " | " << arr[i] << endl;
    return 0;
}