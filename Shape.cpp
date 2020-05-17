#include "Shape.h"

namespace std {

Shape::Shape() {
	// TODO Auto-generated constructor stub
	color = " ";
}
Shape::Shape(const string &c)
{
	color = c;
}
const string& Shape::getColor() const {
	return color;
}

void Shape::setColor(const string& c) {
	this->color = c;
}
string Shape::toString()
{
	return color;
}
Shape::~Shape() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
