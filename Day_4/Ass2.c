#include <stdio.h>
/**
 * main - Print Assement 2 on the screen
 *
 * Return: 0
 */
int main(void)
{
	int age;

	printf("ENTER YOUR AGE\n");
	scanf("%d", &age);



	if (age < 15 || age > 35)
	{
		printf("Sorry only ages between 15 - 35 is allowed\n");
	}
	else if (age == 20)
	{
		printf("Welcome, You deserve special attention\n");
	}
	else if (age == 30)
	{
		printf("Please Take this program Seriously\n");
	}
	else if (age == 34 || age == 35)
	{
		printf("Please Do everything to Succeed now\n");
	}
	else
	{
		printf("You are Warmly Welcome\n");
	}
}
