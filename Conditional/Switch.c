#include <stdio.h>
/**
 * @Author --> INNOCENT UDO || ALX COHORT 11
 *
 * main - Write a program for a school grading System. the grade are
 * 80 ... 100, 70 ... 79, 65 ... 69, 60 ... 64, 50 ... 59, and 0 ...49.
 *
 * Return: 0
 */


int main(void)
{
	int score;
	
	printf("Kindly enter your score: ");
	scanf("%d", &score);

	switch (score)
	{
		case 80 ... 100:
			printf("A\n");
			break;
		case 70 ... 79:
			printf("B\n");
			break;
		case 65 ... 69:
			printf("C\n");
			break;
		case 60 ... 64:
			printf("D\n");
			break;
		case 50 ... 59:
			printf("E\n");
			break;
		case 0 ... 49:
			printf("Failed\n");
			break;
		default:
			printf("Invalid Score\n");
	}
}
