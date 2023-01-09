#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char str[] = "21f innocent";
	char* endPtr;
	long int x = strtol(str, &endPtr, 16);
	printf("The number is %ld\n", x);
	return 0;
}
