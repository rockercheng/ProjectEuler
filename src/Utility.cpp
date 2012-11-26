#include "ProjectEuler.h"

bool isPrime(long long number)
{
	if (number == 2)
	{
		return true;
	}

	if ( (number > 2) && (number % 2 == 0) )
	{
		return false;
	}

	for (long long i = 3; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
