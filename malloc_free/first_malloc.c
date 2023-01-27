#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	/*Write a function that creates an array of chars, and initializes it with a specific char.*/
	char *ptArray;

	//allocating enough space for all array members
	ptArray = malloc(size * sizeof(char));

	//put a char c in each of the memory location.
	for (unsigned int count = 0; count < size; count++)
	{
		//assign  the char to the specific memory location.
		ptArray[count] = c;
	}

	return (ptArray);

}
