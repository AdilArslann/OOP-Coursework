#include "opperator0.h"

void opperator0::setvalues()
{
	l = 100;
	k = 003;
	j = 332;
}

void opperator0::operator-=(opperator& ops)
{
	ops.o = l;
	ops.p = k;
	ops.u = j;
}
