#ifndef CART_VECTOR_H
#define CART_VECTOR_H

#include <cmath>
#include <iostream>

using namespace std;
class Cart_Point;
class Cart_Vector
{
public:
	double x,y;
	Cart_Vector();
	Cart_Vector(double inputx, double inputy);
};
Cart_Vector operator*(Cart_Vector v1,double d);
Cart_Vector operator/(Cart_Vector v1,double d);
ostream& operator<<(ostream& outstr,const Cart_Vector v1);


#endif