#include "TwoDShape.h"

namespace std {

TwoDShape::TwoDShape() {
	// TODO Auto-generated constructor stub
	setColor(" ");
	d2.setX(0.0);
	d2.setY(0.0);
}
TwoDShape::TwoDShape(const string &c, double a, double b)
{
	setColor(c);
	d2.setX(a);
	d2.setY(b);
}
TwoDPoint TwoDShape::getPosition()
{
	return this->d2;
}
double TwoDShape::area()
{
	return -1;
}
double TwoDShape::perimeter()
{
	return -1;
}
TwoDShape::~TwoDShape() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
