#include <stdio.h>
#include <stdlib.h>

void segf(void)
{
	char *str;

	str = "Holberton";
	str[0] = 's';
}

int main(void)
{
	segf();
}
