#include <iostream>
#include "Programmer.h"
#include "Junior.h"
#include "Midlevel.h"
#include "Senior.h"
using namespace std;
void getageexp(int* a, int* b)
{
    cout << "Please enter the age of the programmer:";
    while (!(cin >> *a) || (*a < 18 || *a > 60))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "The age of the programmer cannot be below 18 years old due to legal reasons, please give an age bigger than 17. (We only hire people who are at age in between 18-60)" << endl;
    }
    cout << "Please enter the total experience of the programmer:";
    while (!(cin >> *b) || *a - 18 < *b)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "It is impossible, please make sure that you are typing correctly." << endl << "Please enter the total experience of the programmer:";
    }
}
int main()
{
	int a, b;
    getageexp(&a, &b);
    Junior j;
    Midlevel m;
    Senior s;
    Programmer* p1 = &j;
    Programmer* p2 = &m;
    Programmer* p3 = &s;
	if(b >= 0 && b < 5)
	{
        j.getinfo(a, b);
        p1->calculate();
	}
	else if (b >= 5 && b < 10)
	{
        m.getinfo(a, b);
        p2->calculate();
	}
	else
	{
        s.getinfo(a, b);
        p3->calculate();
	}
}