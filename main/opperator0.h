#pragma once
#include <iostream>
#include "opperator.h"
using namespace std;

class opperator0
{
public:
	int l, k, j;
	void setvalues();
	opperator0& operator-=(opperator& ops);
};

