#include <stdio.h>

/**
 * @Author --> INNOCENT UDO || ALX COHORT 11
 *
 * main - WAP(Write a program) for a school grading System. the grades are: 80 -> 100 = A;
 * 70 -> 79 = B; 65 -> 69 = C; 50 -> 59 = D; Below 40 -> F.
 *
 * Return: 0
 */

int main(void)
{
	int score = 20;

	/* Tell your user to type in their score */
	printf("Enter you Score: \n");
	/* Accept the user's input */
	scanf("%d", &score);

	/* Check if the score is between 80 and 100, then print the grade */
	if (score >= 80 && score <= 100)
	{
		printf("A\n"); 
		/* Using a nested-if-else loop to check for Distinction and Excellent */
		if (score >= 90)
		{
			printf("Distinction! You deserve a Gift.\n");

			/* Using a nested-if-else to determine the type of gift according to score */
			if (score >= 95)
			{
				printf("Your Gifts is GOLD\n");
			}
			else
			{
				printf("Your Gift is SLIVER\n");
			}
		}
		else
		{
			printf("Excellent! But no Gift.\n");
		}
	}
	
	/* Check if the score is between 70 to 79 then print grade B */
	else if (score >= 70 && score <= 79)
	{
		printf("B\n");
	}

	/* Check if the Score is between 65 to 69 then print grade C */

	else if (score >= 60 && score <= 69)
	{
		printf("C\n");
	}

	/* Check if the score is between 50 to 59 then print grade D */
        else if (score >= 50 && score <= 59)
	{
		printf("D\n");
	}
	else
	{
		printf("Failed\n");
	}
	
	return 0;

}
