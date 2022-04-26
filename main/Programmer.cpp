#include "Programmer.h"
#include <iostream>
#include <string>
using namespace std;

void Programmer :: getemployeeinfo()
{
	cout << "Please enter the name, surname and gender of the employee" << endl;
	cin >> name >> surname >> gender;
	cout << endl << "Please enter the age and experience of the employee" << endl;
	cin >> age >> experience;
	cout << endl << "Write the favorite programming language of the employee" << endl;
	cin >> planguage;
	cout << endl << "Name and Surname of the employee: " << name << " " << surname << endl;
	cout << "Age: " << age << "   " << "Gender: " << gender << "   " << "Experience: " << experience << "   " << "Favorite Language: "<< planguage;
}