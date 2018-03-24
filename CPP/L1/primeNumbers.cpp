#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

class primeNumbers
{
public:


    ~mdprimeNumbers()
    {
        cout << "DELEATED BEEP BOOP" << endl;
    };

    int primes[100000];

    primeNumbers(int n)

    {
        int pos = 0;
		bool isPrime;
		for (int i=2; i<=n; i++)
		{
			isPrime = true;
			for (int div=2; div*div<=i; div++)
			{
				if(i%div == 0)
				{
					isPrime = false;
					break;
				}
			}
			if(isPrime)
			{
			    //cout << i << endl;
				primes[pos] = i;
				pos++;
			}
		}
    }

    int number(int a);


};

int primeNumbers::number(int a)
{
    return primes[a];
}

int strToInt(char word[])
{
    int result;
    stringstream conv(word);
    conv >> result;

    return result;

}

main(int argc, char** argv)
{

    int argInt[argc-1];


    for (int i=0; i<argc-1; i++)
    {
        argInt[i] = strToInt(argv[i+1]);
        //cout << argv[i+1] << "  -  " << argInt[i] << endl;
    }

    primeNumbers tab(argInt[0]);

    //cout << "sizeof: " << sizeof(argInt)/sizeof(int) << endl;

    for (int i=1; i<sizeof(argInt)/4; i++)
    {
        cout << argInt[i] << "  -  ";

        if (tab.number(argInt[i]) == 0 || argInt[i] < 0)
            cout << "poza zakresem" << endl;
        else
            cout << tab.number(argInt[i]) << endl;
    }


    return 0;
}
