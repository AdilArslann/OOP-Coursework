#pragma once
#include <iostream>
#include "opperator0.h"
using namespace std;
class opperator
{
public:
	int o, p, u;
	 void operator+=(opperator0& listt) 
	{
		listt.l = o;
		listt.k = p;
		listt.j = u;
	}
};

