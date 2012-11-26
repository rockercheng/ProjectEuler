#include "ProjectEuler.h"

#define ABS(a,b) (a)>(b)?(a)-(b):(b)-(a)

long long SumSquare(int num)
{
	long long sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	return sum * sum;
}

long long SquareSum(int num)
{
	long long sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i*i;
	}
	return sum;
}

long long difference(int num)
{
	return ABS(SumSquare(num), SquareSum(num));
}
