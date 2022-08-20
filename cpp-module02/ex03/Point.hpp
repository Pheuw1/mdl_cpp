#define POITN_H
#ifndef POINT_H
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const float, const float);
    Point(const Point&);
    Fixed get_x() const;
    Fixed get_y() const;
	Point &operator=(const Point&);
	Point operator+(const Point&);
	Point operator-(const Point&);
	Point operator/(const int);
	Point operator*(const int);
    ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
float  dot(const Point &a, const Point &b);

#endif