#include <stdio.h>

double man(double num)
{
	//double result = num * num * num;
	return num * num * num;
}

int main()
{
	printf("Answer: %f \n", man(3.0));
}

//You can actually write a function code here, but you will have to
//put the prototype at the top (above the main function) before you can 
//call the function down.
//
//Here is the prototyp example: double man(double num);
