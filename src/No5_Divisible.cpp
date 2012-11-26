#include "No5_Divisible.h"

int Divisible::getSmallest()
{
	int num = mDivNum;
	while (1)
	{
		bool flag = true;
		for (int i = 1; i <= mDivNum; i++)
		{
			flag &= (num % i == 0);
		}

		if (flag)
			break;
		else
			num += mDivNum;
	}
	return num;
}
