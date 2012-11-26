#include <math.h>
#include "No4_Palindromic.h"

using namespace std;

bool Palindromic::isPalindromic(int number)
{
	int a[10] = {0};
	int intPart = 0, remainPart = 0;
	int len = 0;

	do
	{
		intPart = number / 10;
		remainPart = number % 10;
		a[len] = remainPart;
		len++;
		number = intPart;
	} while (number != 0);

	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		if (a[i] != a[j])
		{
			return false;
		}
	}

	return true;
}

int Palindromic::getLargest()
{
	int maxFactor = pow(10, mDigit) - 1;
	int minFactor = pow(10, mDigit - 1);
	int largest = 0;

	for (int i = maxFactor; i >= minFactor; i--)
	{
		for (int j = maxFactor; j >= minFactor; j--)
		{
			if (isPalindromic(i * j))
			{
				if (i*j > largest)
				{
					largest = i * j;
				}
			}
		}
	}

	return largest;
}

