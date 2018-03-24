#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include "Shape.h"
#include "Circle.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Tetragon.h"
#include "Square.h"
#include "Rectangle.h"
#include "Rhombus.h"


using namespace std;

int main(int argc, char* argv[]){

	if (argc<2)
	{
		exit(0);
	}

	char* whatShapes = argv[1];
	Shape* shapes[strlen(whatShapes)];
	int shapeCount = 0;
	int currArg = 2;


	for (int i=0; i<strlen(whatShapes); i++)
	{
		if (whatShapes[i] != 'c' && whatShapes[i] != 'p' && whatShapes[i] != 'h' && whatShapes[i] != 't'){
			cout << "no shape associated to " << whatShapes[i] << endl;
			continue;
		}

		try{
			if (whatShapes[i] == 'c'){
				shapes[shapeCount] = new Circle(argv[currArg]);
			}
			if (whatShapes[i] == 'p'){
				shapes[shapeCount] = new Pentagon(argv[currArg]);
			}
			if (whatShapes[i] == 'h'){
				shapes[shapeCount] = new Hexagon(argv[currArg]);
			}
			if (whatShapes[i] == 't'){
				if(atof(argv[currArg+4]) == 90){
					if(atof(argv[currArg]) == atof(argv[currArg+2])){
						shapes[shapeCount] = new Square(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
					}else{
						shapes[shapeCount] = new Rectangle(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
					}
				}else{
					shapes[shapeCount] = new Rhombus(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
				}
				currArg+=4;
			}
			shapes[shapeCount]->print();
		}
		catch(const char* msg){
			cout << msg << endl;
			shapeCount--;
		}
		shapeCount++;
		currArg++;

	}

	return 0;
}