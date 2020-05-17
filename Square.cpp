#include "Square.h"

namespace std {

Square::Square()
{
	// TODO Auto-generated constructor stub
	l1 = 0.0;
	setColor(" ");
	d2.setX(0.0);
	d2.setY(0.0);
}
Square::Square(const string& clr, double a, double b, double rad)
{
	l1 = rad;
	setColor(clr);
	d2.setX(a);
	d2.setY(b);
}

double Square::area()
{
	double temp;
	temp = l1 * l1;
	return temp;
}

double Square::perimeter()
{
	double temp;
	temp = 4 * l1;
	return temp;
}

string 	Square::toString()
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
	i = l1;
	s3 << i;
	c =  s3.str();
	i = this->perimeter();
	s4 << i;
	f = s4.str();
	i = this->area();
	s5 << i;
	e = s5.str();
	return getColor()+" Square Position:("+a+","+b+") Side:"+c+" Perimeter:"+f+" Area:"+e;
}

Square::~Square()
{
	// TODO Auto-generated destructor stub
}

} /* namespace std */
