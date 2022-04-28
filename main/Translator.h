#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class Translator :public Employee
{
protected:
	int numlan, ppl;
public:
	void getinfo() override;
	void calculate(int n, int m);
};

