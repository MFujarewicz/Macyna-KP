#include <iostream>
#include <stdlib.h>


using namespace std;


int main()
{
	char z1[] = "90";
	char z2[] = "90";

	if (atof(z1) == atof(z2)){
		cout << "90 = 90"; 
	}

	return 0;
}