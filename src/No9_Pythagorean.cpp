#include "ProjectEuler.h"

int pythagorean(int sum)
{
	for (int a = 0; a < sum/2; a++)
	{
		for (int b = 0; b < sum/2; b++)
		{
			if ( ((a*b) % sum) != 0 )
			{
				continue;
			}

			if ( ((a*b)/sum) == (a + b - (sum/2)) )
			{
				return a * b * (sum - a - b);
			}
		}
	}

	return -1;
}
