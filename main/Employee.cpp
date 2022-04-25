#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

void Employee :: getemployee()
{
	cout << "Please enter the name, surname and gender of the employee" << endl;
	cin >> name >> surname >> gender;
	cout << endl << "Please enter the age and experience of the employee" << endl;
	cin >> age >> experience;
}