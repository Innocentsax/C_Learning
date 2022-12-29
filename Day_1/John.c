#include <stdio.h>

/**
 * main - print integar in John story
 *
 * Return: 0
 */
int main(void)
{
	float x, y;
	char var[] = "John";

	x = 4.0;
	y = 3.6;

	printf("A short story about %s\n", var);
	printf("%s was a coder, he codes in Assembly because he is in school\n", var);
	printf("In year 2, John also had a cgpa of %.1f and a grade of a\n", x);
	printf("In year 3, %s also had a cgpa of %.1f and a grade of a\n", var, x);
	printf("In year 4, %s also had a cgpa of %.1f and a grade of a\n", var, y);
}
