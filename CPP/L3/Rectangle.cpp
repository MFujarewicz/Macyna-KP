#include "Rectangle.h"

Rectangle::Rectangle(double e1, double e2){
	edge1 = e1;
	edge2 = e1;
	edge3 = e2;
	edge4 = e2;
	angleDeg = 90;
}
Rectangle::Rectangle(char* e1, char* e2, char* e3, char* e4, char* a){
	edge1 = atof(e1);
	edge2 = atof(e2);
	edge3 = atof(e3);
	edge4 = atof(e4);
	angleDeg = atof(a);

	if(edge1<=0 || edge2<=0 || edge3<=0 || edge4<=0) throw "All edge arguments in rectangle must have a positive value";
	if(edge1 != edge2 || edge3 != edge4) throw "Edge pairs in rectangle must be of same length";
	if(angleDeg != 90) throw "Angle in rectangle must be 90deg";

}

double Rectangle::getArea() const{
	return edge1*edge2;
}
double Rectangle::getPerimeter() const{
	return edge1 + edge2 + edge3 + edge4;
}
void Rectangle::print(){
	std::cout << "Rectangle Area: " << getArea() << " Perimeter: " << getPerimeter() << "\n";
}