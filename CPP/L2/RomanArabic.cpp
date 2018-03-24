#include <iostream>
#include <string>
#include <exception>
#include <sstream>

using namespace std;



int abrakadabra(int a)
{
}


class RomanArabicException
{
    public: string msg = "";




    RomanArabicException(string s)
    {
        msg = s;
    }


};

/*class Moj2Exception: public invalid_argument
{
        public: Moj2Exception(string s): invalid_argument(s) {};
};*/

class romanArabicConverter
{

    const string romanCharacters[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    const int arabicEquivalent[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

    public:



    static string toRoman(int arabic)
    {
        if (arabic < 1 || arabic >3999)
        {
            throw RomanArabicException("number out of range");
        }

        const string romanCharacters[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        const int arabicEquivalent[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

        string roman = "";

        int pos = 12;

        while(pos>=0)
        {
            if (arabic >= arabicEquivalent[pos])
            {
                arabic -= arabicEquivalent[pos];
                roman = roman + romanCharacters[pos];

            }
            else
            {
                pos--;
            }
        }

        return roman;
    }

    static int toArabic(string roman)
    {
        int arabic = 0;

        for (int i = 1; i<4000; i++)
        {
            if (toRoman(i) == roman)
            {
                arabic = i;
            }
        }

        if (arabic == 0)
        {
            throw RomanArabicException("Not a roman number");
        }


        return arabic;
    }


};


main()//test
{
    for (int i=1; i<4000; i++)
    {
        try
        {
            string x = romanArabicConverter::toRoman(i);
            int y = romanArabicConverter::toArabic(x);
            if (i != y)
            {
                cout << i << " sie zjebalo" << endl;
            }
        }
        catch(RomanArabicException ex)
        {
            cout << i << endl;
        }
    }
}

main3()
{
    char whatToDo = '0';
    string r;
    int a;

    cout << "Roman to Arabic (r) or Arabic to Roman (a)" << endl << "r/a"<< endl;
    cin >> whatToDo;

    if (whatToDo == 'r')
    {
        try
        {
            cout << "roman number:  ";
            cin >> r;
            cout << romanArabicConverter::toArabic(r);
        }
        catch(RomanArabicException e)
        {
            cout << e.msg;
        }
    }

    if (whatToDo == 'a')
    {
        try
        {
            cout << "arabic number:  ";
            cin >> a;
            cout << romanArabicConverter::toRoman(a);
        }
        catch(RomanArabicException e)
        {
            cout << e.msg;
        }
    }
}

main1()
{
    string s;
    cin >> s;



    try
    {
        cout << romanArabicConverter::toRoman(stoi(s)) << endl;
    }
    catch(RomanArabicException ex)
    {
        cout << ex.msg << endl;
    }
    catch(invalid_argument ex)
    {
        try
        {
            cout << romanArabicConverter::toArabic(s) << endl;
        }
        catch(RomanArabicException ex)
        {
            cout << ex.msg << endl;
        }


    }

}





