#include "Programmer.h"
#include <iostream>
using namespace std;

int Programmer::getexperience()
{
    cout << "Please enter the age of the programmer:";
    cin >> age;
    while(age < 18)
    {
        cout << "The age of the programmer cannot be below 18 years old due to legal reasons, please give an age bigger than 17." << endl;
        cin >> age;
    }
    cout << "Please enter the total experience of the programmer:";
    cin >> experience;
    while(age - 18 < experience)
    {
        cout << "It is impossible, please make sure that you are typing correctly." << endl << "Please enter the total experience of the programmer:";
        cin >> experience;
    }
    return experience;
}
