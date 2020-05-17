#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include"TwoDShape.h"


namespace std {

class Triangle : public TwoDShape
{

protected:
	double l1;
	double l2;
	double l3;

public:
	Triangle();
	Triangle(const string& clr, double a, double b, double l, double m, double n);
	virtual double area();
	virtual double perimeter();
	virtual string toString();
	virtual ~Triangle();
};

} /* namespace std */

#endif /* TRIANGLE_H_ */
