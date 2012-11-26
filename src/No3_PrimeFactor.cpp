#include "ProjectEuler.h"

int PrimeFactor::getLargest()
{
	long long dividend = sqrt(mNumber);
	for (long long i = dividend; i >= 1; i--)
	{
		if ((mNumber % i) != 0)
		{
			continue;
		}
		if (isPrime(i) == true)
		{
			return i;
		}
	}

	return 1;
}
