#include "No2_Fibonacci.h"

int Fib::sum (int upper)
{
	int prev1 = 2, prev2 = 1, newFib = 0, sum = 0;
	newFib = prev1 + prev2;
	sum += prev1;

	while (1)
	{
		if (newFib % 2 == 0)
		{
			sum += newFib;
		}

		prev2 = prev1;
		prev1 = newFib;
		newFib = prev1 + prev2;

		if (newFib > upper)
		{
			break;
		}
	}

	return sum;
}
