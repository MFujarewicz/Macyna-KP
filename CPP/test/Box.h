#include<string>

using namespace std;

class Box{
private:
	double length;
	double width;
	double heigth;
	string label;
	string color;

public:
	Box(double length = 1, double width = 1, double heigth = 1, string label = "no label", string color = "no color");
	double getLength() const;
	double getWidth() const;
	double getHeigth() const;
	string getColor() const;
	string getLabel() const;
	void setLabel(string label);

	double getVolume() const;

};