#include "Circle.h"
#include<iostream>

namespace std {

Circle::Circle()
{
	// TODO Auto-generated constructor stub
	radius = 0.0;
	setColor(" ");
	d2.setX(0.0);
	d2.setY(0.0);

}
Circle::Circle(const string& clr, double a, double b, double rad)
{
	radius = rad;
	setColor(clr);
	d2.setX(a);
	d2.setY(b);
}
double Circle::area()
{
	double temp;
	temp = 3.14 * radius * radius;
	return temp;

}
double Circle::perimeter()
{
	double temp;
	temp = 3.14 * 2 * radius;
	return temp;
}
string 	Circle::toString()
{
	double i;
	string a,b,c,f,e;
	stringstream s1,s2,s3,s4,s5;
	i = d2.getX();
	s1 << i;
	a = s1.str();
	i = d2.getY();
	s2 << i;
	b = s2.str();
	i = radius;
	s3 << i;
	c =  s3.str();
	i = this->perimeter();
	s4 << i;
	f = s4.str();
	i = this->area();
	s5 << i;
	e = s5.str();
	return getColor()+" Circle Position:("+a+","+b+") Radius:"+c+" Perimeter:"+f+" Area:"+e;
}

Circle::~Circle() {

}



} /* namespace std */
