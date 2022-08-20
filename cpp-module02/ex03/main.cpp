
#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);

int main( void ) {

	cout << "gfgs :" <<(isInside(0, 0, 20, 0, 10, 30, 10, 15)) << endl;
	cout << "mine :" <<bsp(Point(0, 0), Point(20, 0), Point(10, 30), Point(10, 15)) << endl;
	cout << "gfgs :" <<(isInside(0, 0, 20, 0, 10, 30, -1, -1)) << endl;
	cout << "mine :" <<bsp(Point(0, 0), Point(20, 0), Point(10, 30), Point(-1, -1)) << endl;
	float x1,y1,x2,y2,x3,y3,x,y;
	cout << "input x :"<< endl;
	cin >> x;
	cout << "input y :" << endl;
	cin >> y;
	cout << "input x1 :"<< endl;
	cin >> x1;
	cout << "input y1 :" << endl;
	cin >> y1;
	cout << "input x2 :"<< endl;
	cin >> x2;
	cout << "input y2 :" << endl;
	cin >> y2;
	cout << "input x3 :"<< endl;
	cin >> x3;
	cout << "input y3 :" << endl;
	cin >> y3;
	cout << "gfgs :" <<(isInside(x1,y1,x2,y2,x3,y3, x, y)) << endl;
	cout << "mine :" <<bsp(Point(x1,y1), Point(x2,y2), Point(x3,y3), Point(x, y)) << endl;
	return 0;
}