#include <stdio.h>

int main()
{
	double num1, num2;
	char ops;

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter an operator: ");
	scanf(" %c", &ops);
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if (ops == '+')
	{
		printf("%f\n", num1 + num2);
	}
	else if (ops == '-')
	{
		printf("%f\n", num1 - num2);
	}
	else if (ops == '/')
	{
		printf("%f\n", num1 / num2);
	}
	else if (ops == '*')
	{
		printf("%f\n", num1 * num2);
	}
	else
	{
		printf("invalid operator, rest in Jesus name");
	}

	return 0;

}
