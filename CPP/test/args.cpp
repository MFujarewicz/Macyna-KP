#include<iostream>
#include<stdlib.h>
#include<sstream>

using namespace std;

int strToInt(char word[]);



main(int argc, char** argv)
{
   int a = strToInt(argv[1]);

   cout << a << endl;
}


int strToInt(char word[])
{
    int result;
    stringstream conv(word);
    conv >> result;
    cout << result << endl;

    return result;

}
