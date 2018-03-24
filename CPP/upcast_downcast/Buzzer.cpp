#include "Buzzer.h"

Buzzer::Buzzer(std::string c, int i): Button(c), number(i) {};

int Buzzer::getNumber() const {
	return number;
}
void Buzzer::setNumber(int n){
	number = n;
}
std::string Buzzer::press() const {
	return "Pressed on buzzer";
}
std::string Buzzer::buzz() const {
	return "buzz";
}