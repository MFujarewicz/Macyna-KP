#ifndef BUTTON_H
#define BUTTON_H

#include <string>

class Button{
private:
	std::string color;

public:
	Button(std::string color = "no color");
	std::string getColor() const;
	void setColor(std::string color);
	virtual std::string press() const = 0;
};
#endif