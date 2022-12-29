#include <stdio.h>

int main()
{
	int age;

	do {
		printf("ENTER YOUR AGE: ");
		scanf("%d\n", &age);
	}
	while (age < 15 || age > 35);
}
