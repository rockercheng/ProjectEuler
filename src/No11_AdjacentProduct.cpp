#include "ProjectEuler.h"

int Matrix::getMax4AdjacentProduct(void)
{
	int maxProduct = 0;
	for(int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 17; j++)
		{
			int tmpProduct = mMatrix[i][j]*mMatrix[i][j+1]*mMatrix[i][j+2]*mMatrix[i][j+3];
			if (tmpProduct > maxProduct)
			{
				maxProduct = tmpProduct;
			}
		}
	}

	for(int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int tmpProduct = mMatrix[i][j]*mMatrix[i+1][j]*mMatrix[i+2][j]*mMatrix[i+3][j];
			if (tmpProduct > maxProduct)
			{
				maxProduct = tmpProduct;
			}
		}
	}

	for(int i = 0; i < 17; i++)
	{
		for (int j = 0; j < 17; j++)
		{
			int tmpProduct = mMatrix[i][j]*mMatrix[i+1][j+1]*mMatrix[i+2][j+2]*mMatrix[i+3][j+3];
			if (tmpProduct > maxProduct)
			{
				maxProduct = tmpProduct;
			}
		}
	}

	for(int i = 0; i < 17; i++)
	{
		for (int j = 3; j < 20; j++)
		{
			int tmpProduct = mMatrix[i][j]*mMatrix[i+1][j-1]*mMatrix[i+2][j-2]*mMatrix[i+3][j-3];
			if (tmpProduct > maxProduct)
			{
				maxProduct = tmpProduct;
			}
		}
	}

	return maxProduct;
}

