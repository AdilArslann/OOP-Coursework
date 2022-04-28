#pragma once
#include <iostream>
using namespace std;

class Employee
{
protected:
	int age, experience, thad, day, month, page, total = 0;//age = age, experience = total years worked, thad = total hours worked every day. 
public:
	virtual void getinfo() = 0; //get more info about the employee
	virtual void calculate(int n, int m) = 0; //calculates the monthly salary of the employee
};
