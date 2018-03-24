#include "Pentagon.h"

Pentagon::Pentagon(double e): edge(e) {};
Pentagon::Pentagon(char* e){
	edge = atof(e);
	if (edge <= 0) throw "Pentagon edge length must have a positive value";
}

double Pentagon::getArea() const {
	return sqrt(5*(5+2*sqrt(5)))*edge*edge/4;
}
double Pentagon::getPerimeter() const {
	return 5*edge;
}
void Pentagon::print(){
	std::cout << "Pentagon Area: " << Pentagon::getArea() << " Perimeter: " << Pentagon::getPerimeter() << "\n";
}