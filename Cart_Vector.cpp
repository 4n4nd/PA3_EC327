#include <cmath>
#include <iostream>
#include "Cart_Vector.h"
#include "Cart_Point.h"

using namespace std;

Cart_Vector::Cart_Vector(){
			x=0.0;
			y=0.0;
		}
Cart_Vector::Cart_Vector(double inputx, double inputy){
			x=inputx;
			y=inputy;
		}


Cart_Vector operator*(Cart_Vector v1,double d){
	Cart_Vector outV;
	outV.x=v1.x*d;
	outV.y=v1.y*d;
	return outV;
}

Cart_Vector operator/(Cart_Vector v1,double d){
	Cart_Vector outV;
	outV.x=v1.x/d;
	outV.y=v1.y/d;
	return outV;
}
ostream& operator<<(ostream& outstr,const Cart_Vector v1){
	outstr<<"<"<<v1.x<<", "<<v1.y<<">";
	return outstr;
}