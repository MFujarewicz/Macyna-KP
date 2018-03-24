#include "Hexagon.h"

Hexagon::Hexagon(double e): edge(e) {};
Hexagon::Hexagon(char* e){
	edge = atof(e);
	if (edge <= 0) throw "Hexagon edge argument must have a positive value";
}

double Hexagon::getArea() const {
	return 3*sqrt(3)*edge*edge/2;
}
double Hexagon::getPerimeter() const {
	return 6*edge;
}
void Hexagon::print(){
	std::cout << "Hexagon Area: " << getArea() << " Perimeter: " << getPerimeter() << "\n";
}

