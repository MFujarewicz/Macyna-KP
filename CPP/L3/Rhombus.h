#include "Tetragon.h"

class Rhombus: public Tetragon{
public:
	Rhombus(double e = 1, double a = 90);
	Rhombus(char* e1, char* e2, char* e3, char* e4, char* a);
	double getArea() const;
	double getPerimeter() const;
	void print();
};