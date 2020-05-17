#include "ThreeDPoint.h"

namespace std {

ThreeDPoint::ThreeDPoint()
{
	setX(0);
	setY(0);
	z = 0;
}
ThreeDPoint::ThreeDPoint(double a, double b, double c)
{
	setX(a);
	setY(b);
	z = c;
}
double ThreeDPoint::getZ() const {
	return z;
}

void ThreeDPoint::setZ(double z) {
	this->z = z;
}

ThreeDPoint::~ThreeDPoint() {
}

} /* namespace std */
