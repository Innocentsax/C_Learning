#include <stdio.h>
#include <stdlib.h>

void saxophone(char name[], int age)
{
	printf("Hello %s, Your new age is %d!\n", name, age);
}

int main()
{
	//Function is a collection of code that perform a specific task.
	saxophone("Innocent", 26);
	saxophone("Ekemini", 23);
	saxophone("Samuel", 29);

	return 0;
}
