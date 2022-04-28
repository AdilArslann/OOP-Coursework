#pragma once
#include "Programmer.h"
class Senior :public Programmer
{
protected:
	int bonus = 1000;
public:
	void getinfo(int n, int m);
	void calculate();
};

