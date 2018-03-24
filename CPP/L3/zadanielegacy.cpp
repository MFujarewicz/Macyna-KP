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

	if(argc<2){
		cout << "Too few arguments(c-circle t-tetragon p-pentagon h-hexagon)" << endl;
		exit(0);
	}

	Shape* shapes[strlen(argv[1])];
	
	bool wasMade[strlen(argv[1])];

	for(int i=0; i<strlen(argv[1]); i++){
		wasMade[i] = false;
	}

	int shapeCount = 0;
	int currArg = 2;



	for (int i=0; i<strlen(argv[1]); i++){
		switch (argv[1][i]){
			case 'c':{
				try{
					if (argc - currArg < 1) throw "not enough arguments to make a circle";
					shapes[i] = new Circle(argv[currArg]);
					wasMade[i] = true;
					shapeCount++;
				}
				catch(const char* msg){
					cout << msg << endl;
					wasMade[i] = false;
				}
				currArg++;
				break;
			}
			case 'p':{
				try{
					if (argc - currArg < 1) throw "not enough arguments to make a pentagon";
					shapes[i] = new Pentagon(argv[currArg]);
					wasMade[i] = true;

					shapeCount++;

				}
				catch(const char* msg){
					cout << msg << endl;
					wasMade[i] = false;
				}
				currArg++;
				break;
			}
			case 'h':{
				try{
					if(argc - currArg < 1) throw "not enough arguments to make a hexagon";
					shapes[i] = new Hexagon(argv[currArg]);
					wasMade[i] = true;
					shapeCount++;
				}
				catch(const char* msg){
					cout << msg << endl;
					wasMade[i] = false;
				}
				currArg++;
				break;
			}
			case 't':{
				if(argc - currArg >= 5){
					if(atof(argv[currArg+4]) != 90){
						try{
							shapes[i] = new Rhombus(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
							wasMade[i] = true;
							shapeCount++;
						}
						catch(const char* msg){
							cout << msg << endl;
							wasMade[i] = false;
						}
					}else if (atof(argv[currArg]) != atof(argv[currArg+2])){
						try{
							shapes[i] = new Rectangle(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
							wasMade[i] = true;
							shapeCount++;
						}
						catch(const char* msg){
							cout << msg << endl;
							wasMade[i] = false;
						}
					} else {
						try{
							shapes[i] = new Square(argv[currArg], argv[currArg+1], argv[currArg+2], argv[currArg+3], argv[currArg+4]);
							wasMade[i] = true;	
							shapeCount++;
						}
						catch(const char* msg){
							cout << msg << endl;
							wasMade[i] = false;
						}
					}
				}
				else{
					cout << "not enough arguments to make a tetragon" << endl;
				}
				currArg+=5;
				break;
			}
			default:{
				cout << argv[1][i] << " - unrecognized symbol\n";
			}

		}
	}




	cout << "shapes made: " << shapeCount << endl;
	for (int i = 0; i<strlen(argv[1]); i++){
		if(wasMade[i] && shapes[i] != NULL){
			cout << i << ": wasMade = true\n";
			shapes[i]->print();
		}else{
			cout << i << ": wasMade = false\n";
		}
	}

	return 0;
}