#include "TwoDPoint.h"

namespace std {

TwoDPoint::TwoDPoint() {
	// TODO Auto-generated constructor stub
	x = 0.0;
	y = 0.0;
}
TwoDPoint::TwoDPoint(double a, double b) {
	// TODO Auto-generated constructor stub
	x = a;
	y = b;
}
double TwoDPoint::getX() const {
	return x;
}

void TwoDPoint::setX(double x) {
	this->x = x;
}

double TwoDPoint::getY() const {
	return y;
}

void TwoDPoint::setY(double y) {
	this->y = y;
}

TwoDPoint::~TwoDPoint() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
