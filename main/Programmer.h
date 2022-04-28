#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;

class Programmer :public Employee
{
protected:
	int numoflan;
public:
    void getinfo() override;
    void calculate(int n, int m) override;
};

