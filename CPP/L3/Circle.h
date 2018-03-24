#include "Shape.h"

class Circle: public Shape{
private:
	double radius;	
public:
	Circle(double r = 1);
	Circle(char* r);
	double getArea() const;
	double getPerimeter() const;
	void print();
};