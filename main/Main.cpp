#include <iostream>
#include "Programmer.h"
#include "Junior.h"
using namespace std;
void getageexp(int* a, int* b)
{
    cout << "Please enter the age of the programmer:";
    cin >> *a;
    while (*a < 18 || *a > 60)
    {
        cout << "The age of the programmer cannot be below 18 years old due to legal reasons, please give an age bigger than 17. (We only hire people who are at age in between 18-60)" << endl;
        cin >> *a;
    }
    cout << "Please enter the total experience of the programmer:";
    cin >> *b;
    while (*a - 18 < *b)
    {
        cout << "It is impossible, please make sure that you are typing correctly." << endl << "Please enter the total experience of the programmer:";
        cin >> *b;
    }
}
int main()
{
	int a, b;
    getageexp(&a, &b);
    Junior j;
    Programmer* p1 = &j;
	if(b >= 0 && b < 5)
	{
        j.getinfo(a, b);
        p1->calculate();
	}
	else if (b >= 5 && b < 10)
	{

	}
	else
	{
	}
}