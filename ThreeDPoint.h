
#ifndef THREEDPOINT_H_
#define THREEDPOINT_H_
#include "TwoDPoint.h"

namespace std {

class ThreeDPoint : public TwoDPoint
{
protected:
	double z;

public:
	ThreeDPoint();
	ThreeDPoint(double a, double b, double c);
	virtual ~ThreeDPoint();
	double getZ() const;
	void setZ(double z);
};

} /* namespace std */

#endif /* THREEDPOINT_H_ */
