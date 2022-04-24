#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

void Employee :: getemployee()
{
	cout << "Please enter the name, surname and gender of the employee" << endl;
	cin >> na >> surname >> gender;
	cout << endl << "Please enter the age and experience of the employee" << endl;
	cin >> age >> experience;
	cout << endl << "Name and Surname of the employee: " << na << " " << surname << endl;
	cout << "Age: " << age << "   " << "Gender: " << gender << "   " << "Experience: " << experience;
}