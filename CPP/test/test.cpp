#include <iostream>

using namespace std;

class person
{
public:
    int age;
    int heigth;

    int agePlusHeigth()
    {
        return age + heigth;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setHeigth(int h);
};

void person::setHeigth(int h)
{
    heigth = h;
}


main()
{

    person dawid;
    dawid.setAge(20);
    dawid.setHeigth(182);
    cout << dawid.age << endl;
    cout << dawid.agePlusHeigth();

    return 0;
}
