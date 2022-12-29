/**#include <stdio.h>

// main - Print the addition of numbers using printf

int main()
{
	int num1, num2;

	printf("Enter your first number: ");
	scanf("%d", &num1);

	printf("Enter your Second number: ");
	scanf("%d", &num2);

	printf("Ans: %d\n", num1 * num2);
	

	return 0;
}*/

#include <stdio.h>

int main()
{
	//Building a Mad Libs Game
	char color[20];
	char noun[20];
	char celeb[20];

	printf("Enter your color: ");
	fgets(color, 20, stdin);
	printf("Enter your noun: ");
	scanf("%s", noun);
	printf("Enter your celeb: ");
	scanf("%s", celeb);

	printf("Roses are %s\n", color);
	printf("%s are Blue\n", noun);
	printf("I Love %s\n", celeb);
}
