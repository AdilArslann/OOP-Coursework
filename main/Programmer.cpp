#include "Programmer.h"
#include <iostream>
#include <string>
using namespace std;

void Programmer :: getfavoritelan()
{
	cout << "Write the favorite programming language of the employee" << endl;
	cin >> planguage;
	cout << endl << "Name and Surname of the employee: " << name << " " << surname << endl;
	cout << "Age: " << age << "   " << "Gender: " << gender << "   " << "Experience: " << experience << "   " << "Favorite Language: "<< planguage;
}