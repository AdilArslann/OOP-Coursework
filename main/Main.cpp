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
	cout << a << b;
	/*if (a >= 0 && a < 5)
	{

	}
	else if (a >= 5 && a < 10)
	{

	}
	else
	{
	}
    */
}