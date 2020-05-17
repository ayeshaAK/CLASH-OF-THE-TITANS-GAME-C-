#ifndef THREEDSHAPE_H_
#define THREEDSHAPE_H_
#include"ThreeDPoint.h"
#include"Shape.h"

namespace std {

class ThreeDShape : public Shape, public ThreeDPoint
{
protected:
	ThreeDPoint d3;

public:
	ThreeDShape();
	ThreeDShape(const string &clr, double a, double b, double c);
	virtual ThreeDPoint getPosition();
	virtual double volume();
	virtual ~ThreeDShape();
};

} /* namespace std */

#endif /* THREEDSHAPE_H_ */
