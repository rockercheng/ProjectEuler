#include "ProjectEuler.h"

long long Prime::getPrimeNum(int index)
{
	int count = 0;
	long long i = 2;
	while (1)
	{
		if (isPrime(i))
		{
			count++;
			if (count == index)
			{
				return i;
			}
		}
		i++;
	}
}

long long Prime::getPrimeSum(int upper)
{
	int sum = 0, i = 2;
	while (i < upper)
	{
		if (isPrime(i))
		{
			sum += i;
		}
		i++;
	}

	return sum;
}
