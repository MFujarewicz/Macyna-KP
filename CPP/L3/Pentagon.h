#include "Shape.h"

class Pentagon: public Shape{
private:
	double edge;
	
public:
	Pentagon(double e = 1);
	Pentagon(char* e);
	double getArea() const;
	double getPerimeter() const;
	void print();


};