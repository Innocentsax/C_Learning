#include <stdio.h>

/**
 * main - Print out variables using Dowhile loops
 *
 * Return: 0
 */
int main(void)
{
	int i = 7;

	do {
		printf("%d\n", i);
		i++;
	}
	while (i < 5);
}
