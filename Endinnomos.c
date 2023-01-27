#include <stdio.h>

int main()
{
	// WAP that request a client to input 5 arrays of numbers
	
	int moses[5];
	int endesew;
	     

	for ( endesew = 0; endesew < 5; endesew++)
	{
	printf("please input a number: ");
	scanf("%d", &moses[endesew]);
	}
	printf("\nThe total number of entered is: %d\n", endesew);
	
	for (endesew = 0; endesew < 5; endesew++)
	{
		printf("%d", moses[endesew]);
	}
	printf("\n");

}
