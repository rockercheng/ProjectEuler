#include "No1_Multiple.h"

int Multiple::getSum()
{
	int sum = 0;
	for (int i = 0; i < mUpper; i++)
	{
		if (i % mMember1 == 0)
		{
			sum += i;
		}
		else if (i % mMember2 == 0)
		{
			sum += i;
		}
	}

	return sum;
}



