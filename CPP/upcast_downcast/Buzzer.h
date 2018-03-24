#ifndef BUZZER_H
#define BUZZER_H


#include "Button.h"

class Buzzer: public Button{
private:
	int number;
public:
	Buzzer(std::string c = "no color", int i = 0);
	int getNumber() const;
	void setNumber(int);

	std::string press() const;
	std::string buzz() const;

};
#endif