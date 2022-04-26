#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
class Translator : public Employee
{
protected:
	string favoritelan;
	int numoflan;
public:
	void getemployeeinfo();
};

