#include "Point.hpp"

Point::Point()
{
    x = Fixed(0);
    y = Fixed(0);
}

Point::Point(const float _x,const float _y)
{
    x = Fixed(_x);
    y = Fixed(_y);
}

Point::Point(const Point& p)
{
    x = p.x;
    y = p.y;
}

Point &Point::operator=(const Point& p)
{
    x = p.x;
    y = p.y;
    return(*this);
}

Fixed Point::get_x() const
{
    return (x);
}
Fixed Point::get_y() const
{
    return (y);
}

Point Point::operator+(const Point& p)
{
    Point tmp((x + p.y).toFloat(),(y + p.y).toFloat());
    return tmp;
}
Point Point::operator-(const Point& p)
{
    Point tmp((x - p.y).toFloat(),(y - p.y).toFloat());
    return tmp;
}

Point Point::operator/(const int n)
{
    Point tmp((x / n).toFloat(), (y / n).toFloat());
    return tmp;
}

float  dot(const Point &a, const Point &b)
{
    return (a.get_x().toFloat()*b.get_x().toFloat() + a.get_y().toFloat()+b.get_y().toFloat());
}
 
Point::~Point()
{;} 