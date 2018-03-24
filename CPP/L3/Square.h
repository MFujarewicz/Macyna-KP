#include "Tetragon.h"

class Square: public Tetragon{
public:
	Square(double e = 1);
	Square(char* e1, char* e2, char* e3, char* e4, char* a);
	double getArea() const;
	double getPerimeter() const;
	void print();
};