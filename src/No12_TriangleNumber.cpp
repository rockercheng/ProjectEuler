#include "ProjectEuler.h"

int TriangleNumber::getNumOfFactor(int triNum)
{
	int count = 1;
	for (int i = 1; i <= triNum/2; i++)
	{
		if (triNum%i == 0)
		{
			count++;
		}
	}
	return count;
}

int TriangleNumber::getTriNumBySeq (int seq)
{
	return ((1 + seq)*seq)/2;
}

int TriangleNumber::getTriNumByFactor (int numOfFactor)
{
	int seqNum = numOfFactor*2, triNum = 0;
	while (1)
	{
		triNum = getTriNumBySeq(seqNum);
		if (getNumOfFactor(triNum) > numOfFactor)
		{
			return triNum;
		}
		seqNum++;
	}
}
