#include <stdio.h>

/**
 * main - Print my work on if and else statment
 *
 * Return: 0
 */
int main(void)
{
	int age = 70;


	if (age == 10)
	{
		printf("You can start playing Saxophone\n");
	}
	else if (age < 10)
	{
		printf("You cannot play the saxophone\n");
	}
	else if(age > 10 && age <20)
	{
		printf("You are too old to play Saxophone\n");
	}
	else
	{
		printf("Please try again letter\n");
	}
}
