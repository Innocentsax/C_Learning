#include <stdio.h>
#include <stdlib.h>

void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;
	
	sum = t[0] + t[1] + t[2];
	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
}
int main()
{
	/**
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'k';
	str[2] = '\0';

	printf("%s\n", str);
	
	
	int *tab;

	tab = malloc(sizeof(*tab) * 3);
	tab[0] = 98;
	tab[1] = -1024;
	tab[2] = 402;

	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	*/


	m(98, 402, -1024);

	return 0;
}
