#pragma once
#include <iostream>
using namespace std;
#include "Employee.h"

class Artist :public Employee
{
protected:
	int numprogram, totalcommonth;
public:
	void getinfo() override;
	void calculate(int n, int m) override;
};

