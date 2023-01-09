#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int sum = 0;
	printf("argc = %d\n", argc);
	printf("Let's see what is in argv[]\n");
	
	if (argc > 1)
	{
		for (int i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum = sum + atoi(argv[i]);
		}
		printf("The sum of the num = %d\n", sum);
	}
	return 0;
}
