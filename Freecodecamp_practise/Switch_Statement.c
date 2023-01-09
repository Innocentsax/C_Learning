#include <stdio.h>

int main()
{
	char grade;


	printf("Enter your Grade: ");
	scanf(" %c", &grade);
	
	switch (grade)
	{
		case 'A':
			printf("You are Great!\n");
			break;
		case 'B':
			printf("You are alright!\n");
			break;
		case 'C':
			printf("You did poorly!\n");
			break;
		case 'D':
			printf("You did very Bad!\n");
			break;
		case 'F':
			printf("You have Fail!\n");
			break;
		default:
			printf("Invalid Grade\n");
	}
	return 0;
}
