#ifndef SHAPE_H_
#define SHAPE_H_
#include<string>
#include<sstream>

namespace std {

class Shape {

protected:
	string color;

public:
	Shape();
	Shape(const string &c);
	virtual string toString();
	virtual ~Shape();
	const string& getColor() const;
	void setColor(const string& c);
};

} /* namespace std */

#endif /* SHAPE_H_ */
