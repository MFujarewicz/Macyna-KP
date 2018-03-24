#include "Shape.h"

class Hexagon: public Shape{
private:
	double edge;
public:
	Hexagon(double e = 1);
	Hexagon(char* e);
	double getArea() const;
	double getPerimeter() const;
	void print();
};