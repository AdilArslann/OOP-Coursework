#pragma once
#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

class Programmer : public Employee
{
protected:
	string planguage;
public:
	void getfavoritelan();
};

