#include "Triangle.h"

namespace std {

Triangle::Triangle() {
	// TODO Auto-generated constructor stub
	l2 = 0.0;
	l3 = 0.0;
	l1 = 0.0;
	setColor(" ");
	d2.setX(0.0);
	d2.setY(0.0);
}
Triangle::Triangle(const string& clr, double a, double b, double l, double m, double n)
{
	l2 = l;
	l3 = m;
	l1 = n;
	setColor(clr);
	d2.setX(a);
	d2.setY(b);
}
double Triangle::area()
{
	double temp;
	temp = l1*l2/2;
	return temp;
}
double Triangle::perimeter()
{
	double temp;
	temp = l1 + l2 + l3;
	return temp;
}
string Triangle::toString()
{
	double i;
	string a,b,c,f,e,g,h;
	stringstream s1,s2,s3,s4,s5,s6,s7;
	i = d2.getX();
	s1 << i;
	a = s1.str();
	i = d2.getY();
	s2 << i;
	b = s2.str();
	i = l1;
	s3 << i;
	c =  s3.str();
	i = l2;
	s6 << i;
	g =  s3.str();
	i = l3;
	s7 << i;
	h =  s3.str();	
	i = this->perimeter();
	s4 << i;
	f = s4.str();
	i = this->area();
	s5 << i;
	e = s5.str();
	return getColor()+" Triangle Position:("+a+","+b+") Side1:"+c+" Side2:"+g+" Side3:"+h+" Perimeter:"+f+" Area:"+e;
}
Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
