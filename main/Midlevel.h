#pragma once
#include "Programmer.h"
class Midlevel :public Programmer
{
protected:
	int bonus = 500;
public:
	void getinfo(int n, int m);
	void calculate();
};

