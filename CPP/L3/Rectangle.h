#include "Tetragon.h"

class Rectangle: public Tetragon{
public:
	Rectangle(double e1 = 1, double e2 = 1);
	Rectangle(char* e1, char* e2, char* e3, char* e4, char* a);
	double getArea() const;
	double getPerimeter() const;
	void print();
};