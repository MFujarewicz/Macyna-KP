#include "Rhombus.h"

Rhombus::Rhombus(double e, double a){
	edge1 = e;
	edge2 = e;
	edge3 = e; 
	edge4 = e;
	angleDeg = a;
}
Rhombus::Rhombus(char* e1, char* e2, char* e3, char* e4, char* a){
	edge1 = atof(e1);
	edge2 = atof(e2);
	edge3 = atof(e3);
	edge4 = atof(e4);
	angleDeg = atof(a);

	if(edge1<=0 || edge2<=0 || edge3<=0 || edge4<=0) throw "All edge arguments in rhombus must have a positive value";
	if(edge1 != edge2 || edge2 != edge3 || edge3 != edge4) throw "All edges in rhombus have to be of the same length";
	if(angleDeg <= 0 || angleDeg >= 180) throw "Angle in rhombus must be between 0-180 deg";
}

double Rhombus::getArea() const{
	return edge1*edge1*sin((angleDeg*PI)/180);
}
double Rhombus::getPerimeter() const{
	return edge1*4;
}
void Rhombus::print(){
	std::cout << "Rhombus Area: " << getArea() << " Perimeter: " << getPerimeter() << "\n";
}