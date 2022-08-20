#include "Point.hpp"

//me
bool bsp( Point const a, Point const b, Point const c, Point const point)
{   
    Point t1(a);Point t2(b);Point t3(c);Point p(point);
    Point p1(t1 + (t2 - t1) / 2);
    Point p2(t2 + (t3 - t2) / 2);
    Point p3(t3 + (t1 - t3) / 2);
    if (dot((p - p1), (t3 - p1)) >= 0 && dot((p - p2), (t1 - p2)) >= 0 && dot((p - p3), (t2 - p3)) >= 0) 
        return (1);
    return (0);
}


//gfg
#include <bits/stdc++.h>
using namespace std;
  
/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
  
/* A function to check whether point P(x, y) lies inside the triangle formed
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{  
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);
  
   /* Calculate area of triangle PBC */ 
   float A1 = area (x, y, x2, y2, x3, y3);
  
   /* Calculate area of triangle PAC */ 
   float A2 = area (x1, y1, x, y, x3, y3);
  
   /* Calculate area of triangle PAB */  
   float A3 = area (x1, y1, x2, y2, x, y);
    
   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}