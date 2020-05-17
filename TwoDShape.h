#ifndef TWODSHAPE_H_
#define TWODSHAPE_H_
#include"TwoDPoint.h"
#include"Shape.h"

namespace std {

class TwoDShape : public Shape//, public TwoDPoint
{
protected:
	TwoDPoint d2;

public:
	TwoDShape();
	TwoDShape(const string &c, double a, double b);
	virtual TwoDPoint getPosition();
	virtual double area();
	virtual double perimeter();
	virtual ~TwoDShape();
};

} /* namespace std */

#endif /* TWODSHAPE_H_ */
