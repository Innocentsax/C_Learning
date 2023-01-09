#include <stdio.h>

int main()
{
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("Here is the address for age:%p\n gpa: %p\n grade: %p\n  ", &age, &gpa, &grade);
	return 0;
}
