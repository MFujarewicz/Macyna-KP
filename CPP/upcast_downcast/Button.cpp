#include "Button.h"

Button::Button(std::string c): color(c) {};

std::string Button::getColor() const{
	return color;
}
void Button::setColor(std::string c){
	color = c;
}
/*std::string Button::press() const{
	return "Clicked on button";
}*/
