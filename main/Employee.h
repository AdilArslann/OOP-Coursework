#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	string name;
	string surname;
	string gender;
	int age, experience;
public:
	virtual void getemployeeinfo() = 0;

		
};