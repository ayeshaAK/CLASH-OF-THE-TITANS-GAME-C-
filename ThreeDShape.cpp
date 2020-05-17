#include "ThreeDShape.h"
using namespace std;

ThreeDShape::ThreeDShape() {
	// TODO Auto-generated constructor stub
	setColor(" ");
	d3.setX(0.0);
	d3.setY(0.0);
	d3.setZ(0.0);
}
ThreeDShape::ThreeDShape(const string &clr, double a, double b, double c) {
	// TODO Auto-generated constructor stub
	setColor(clr);
	d3.setX(a);
	d3.setY(b);
	d3.setZ(c);
}
ThreeDPoint ThreeDShape::getPosition()
{
	return this->d3;
}
double ThreeDShape::volume()
{
	return -1;
}
ThreeDShape::~ThreeDShape() {
	// TODO Auto-generated destructor stub
}

