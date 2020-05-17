#ifndef CIRCLE_H_
#define CIRCLE_H_
#include"TwoDShape.h"

namespace std {

class Circle : public TwoDShape
{
protected:
	double radius;

public:
	Circle();
	Circle(const string& clr, double a, double b, double rad);
	virtual double area();
	virtual double perimeter();
	virtual string toString();
	virtual ~Circle();
};

} /* namespace std */

#endif /* CIRCLE_H_ */
