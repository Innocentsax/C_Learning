#include <stdio.h>

int main()
{
	int num;
	printf("Enter the number of star: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
		printf(" %d ", j);
		}
		printf("\n");
	}

	/**int  i = 0;
	do
	{
		int j = 0;
		do
		{
			printf(" * ");
			j++;
		}
		while (j < 5);
		
		printf("\n");
		i++;
	}
	while (i < 5);*/



}
