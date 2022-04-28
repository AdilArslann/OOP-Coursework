#pragma once
#include <iostream>
using namespace std;

class Programmer
{
protected:
	int age, experience, numoflan, thad, day, month, page, total;//age = age, experience = total years worked, numoflan = total number of programming languages known, thad = total hours worked every day. 
public:
	virtual void getinfo(int n, int m) = 0; //get more info about the employee
	virtual void calculate() = 0; //calculates the monthly salary of the employee
};

