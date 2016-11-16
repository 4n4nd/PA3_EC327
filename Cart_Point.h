#ifndef CART_POINT_H
#define CART_POINT_H

#include <cmath>
#include <iostream>

using namespace std;
class Cart_Vector;
class Cart_Point
{
public:
	double x,y;
	Cart_Point();
	Cart_Point(double inputx, double inputy);
};

double cart_distance(Cart_Point p1,Cart_Point p2);
ostream& operator<<(ostream& outstr,const Cart_Point p1);
Cart_Point operator+(Cart_Point p1, Cart_Vector v1);
Cart_Vector operator-(Cart_Point p1, Cart_Point p2);
/*
class Cart_Point{
	public:
		double x,y;
		Cart_Point(){
			x=0.0;
			y=0.0;
		}
		Cart_Point(double inputx, double inputy){
			x=inputx;
			y=inputy;
		}
};

double cart_distance(Cart_Point p1,Cart_Point p2){
	return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}
ostream& operator<<(ostream& outstr,const Cart_Point p1){
	outstr<<"("<<p1.x<<", "<<p1.y<<")";
	return outstr;
}
Cart_Point operator+(Cart_Point p1, Cart_Vector v1){
	Cart_Point outP;
	outP.x=p1.x+v1.x;
	outP.y=p1.y+v1.y;
	return outP;
}
Cart_Vector operator-(Cart_Point p1, Cart_Point p2){
	Cart_Vector outV;
	outV.x=p1.x-p2.x;
	outV.y=p1.y-p2.y;
	return outV;
}*/
#endif