#include "Box.h"

Box::Box(double length, double width, double heigth, string label, string color): length(length), width(width), heigth(heigth), label(label), color(color) {}

double Box::getLength() const {
	return length;
}
double Box::getWidth() const {
	return width;
}
double Box::getHeigth() const {
	return heigth;
}
string Box::getLabel() const {
	return label;
}
string Box::getColor() const {
	return color;
}
void Box::setLabel(string label){
	this->label = label;
}

double Box::getVolume() const {
	return heigth*width*length;
}