#ifndef TWODPOINT_H_
#define TWODPOINT_H_

namespace std {

class TwoDPoint {

protected:
	double x;
	double y;

public:
	TwoDPoint();
	TwoDPoint(double a, double b);
	virtual ~TwoDPoint();
	double getX() const;
	void setX(double x);
	double getY() const;
	void setY(double y);
};

} /* namespace std */

#endif /* TWODPOINT_H_ */
