#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <bits/stdc++.h>
using namespace std;
Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		cout << "A" << endl;
	else if (dynamic_cast<B *>(p))
		cout << "B" << endl;
	else if (dynamic_cast<C *>(p))
		cout << "C" << endl;
    else 
        cout << "not found"  << endl;
}

int main()
{   
    srand(time(0));
    vector<Base*> classes(10);
	for (int i = 0; i < 10; ++i)
	{
		classes[i] = (generate());
        identify(classes[i]);
	}
	for (int i = 0; i < 10; ++i)
        delete classes[i];
    return 0;
}
