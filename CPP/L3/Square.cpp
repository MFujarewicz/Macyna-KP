#include "Square.h"
#include<iostream>

Square::Square(double e){
	edge1 = e;
	edge2 = e;
	edge3 = e;
	edge4 = e;
	angleDeg = 90;
}
Square::Square(char* e1, char* e2, char* e3, char* e4, char* a){
	edge1 = atof(e1);
	edge2 = atof(e2);
	edge3 = atof(e3);
	edge4 = atof(e4);
	angleDeg = atof(a);

	if(edge1<=0 || edge2<=0 || edge3<=0 || edge4<=0) throw "All edge arguments in square must have a positive value";
	if(edge1 != edge2 || edge2 != edge3 || edge3 != edge4) throw "All edges in square have to be of the same length";
	if(angleDeg != 90) throw "Angle in square must be 90deg";
}

double Square::getArea() const{
	
	return edge1*edge2;
}
double Square::getPerimeter() const{
	return edge1*4;
}
void Square::print(){
	std::cout << "Square Area: " << getArea() << " Perimeter: " << getPerimeter() << "\n";
}

