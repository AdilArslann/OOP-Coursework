#include <iostream>
#include "Employee.h"
#include "Programmer.h"
#include "Translator.h"
#include "Artist.h"
using namespace std;

void getageexp(int* a, int* b, int* c)
{
    cout << "Please enter the age of the Employee:";
    while (!(cin >> *a) || (*a < 18 || *a > 60))
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "The age of the Employee cannot be below 18 years old due to legal reasons, please give an age bigger than 17. (We only hire people who are at age in between 18-60)" << endl;
    }
    cout << "Please enter the total experience of the Employee:";
    while (!(cin >> *b) || *a - 18 < *b)
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "It is impossible, please make sure that you are typing correctly." << endl << "Please enter the total experience of the Employee:";
    }
    cout << "Input 0 for Programmer, 1 for Translator, 2 for Artist:";
    while (!(cin >> *c) || (*c < 0 || *c > 2))
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "We have only 3 employee catagories please make sure that you are typing correctly. (0, 1, 2)" << endl;
    }
}
int main()
{
	int a, b, c;
    getageexp(&a, &b, &c);
    Programmer p;
    Translator t;
    Artist ar;
    Employee* e1 = &p;
    Employee* e2 = &t;
    Employee* e3 = &ar;
    if(c == 0)
    {
        e1->getinfo();
        e1->calculate(a, b);
    }
    else if(c == 1)
    { 
        e2->getinfo();
        e2->calculate(a, b);
    }
    else 
    {
        e3->getinfo();
        e3->calculate(a, b);
    }
}