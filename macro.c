#include <stdio.h>
#define N 5

int main()
{
	int arr[N], i;

	for (i = 0; i < N; i++)
	{
		printf("Enter the input for index %d: ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nArray elements are as follows: %d \n", i);
	for ( i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
