#include <stdio.h>

int main(void)
{
	int n;

	printf("ENTER A NUMBER: ");
	scanf("%d", &n);


	for(int i= 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	return 0;
}
