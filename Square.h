#ifndef SQUARE_H_
#define SQUARE_H_
#include"TwoDShape.h"

namespace std {

class Square : public TwoDShape
{
	double l1;
public:
	Square();
	Square(const string& clr, double a, double b, double line);
	virtual double area();
	virtual double perimeter();
	virtual string toString();
	virtual ~Square();
};

} /* namespace std */

#endif /* SQUARE_H_ */
