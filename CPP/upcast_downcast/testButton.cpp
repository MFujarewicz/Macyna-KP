#include <iostream>
#include "Button.h"
#include "Buzzer.h"

using namespace std;


int main(){

	Button * ptrButt = new Buzzer("czerwony");

	//Button b("roz");

	cout << ptrButt->press();


	return 0;
}