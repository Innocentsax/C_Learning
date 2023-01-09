#include <stdio.h>

int main()
{
	int nums[3][2] = 
	{
		{3, 5},//the count start from 0, hence this is 0.
		{6, 7},//this is 1.
		{19,12},//this is 2.
	};
	
	//printf("%d\n", nums[0][0]);
	
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d,", nums[i][j]);
		}
		printf("\n");
	}
}
