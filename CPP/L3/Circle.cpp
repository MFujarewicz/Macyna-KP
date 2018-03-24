#include "Circle.h"

Circle::Circle(double r): radius(r) {};
Circle::Circle(char* r){
	radius = atof(r);
	if (radius <= 0) throw "Circle radius must have a positive value";
}

double Circle::getArea() const {
	return radius*radius*PI;
}
double Circle::getPerimeter() const {
	return 2*radius*PI;
}
void Circle::print(){
	std::cout << "Circle Area: " << getArea() << " Perimeter: " << getPerimeter() << "\n";
}
