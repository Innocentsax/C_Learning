#include <stdio.h>


void factorial(int n)
{
	int a, i;

	a = 1;
	i = 1;
	while ( i <= n)
	{
		a = a * 1;
		i++;
	}
	return (a);
}

int main(void)
{
	int f; 
		
	f = factorial(5);
	printf("5! = %d\n", f);
	return 0;
}
