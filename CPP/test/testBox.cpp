#include <iostream>
#include <string>
#include "Box.h"

using namespace std;

int main(){
	Box pudelko(10, 10, 10);

	cout << "dlugosc: " << pudelko.getLength() << "\nszerokosc: " << pudelko.getWidth() << "\nwysokosc: " << pudelko.getHeigth() << "\nobjetosc: " << pudelko.getVolume() << endl;
	cout << "kolor: " << pudelko.getColor() << "\netykieta: " << pudelko.getLabel();
	pudelko.setLabel("Szczurze ogony");
	cout << "\nnowa etykieta: " << pudelko.getLabel();
}