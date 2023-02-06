#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// A program that write staff names into a text file

// STEP BY STEP PROCEDURE TO WRITE INTO A FILE
int main(void)
{
	char str[500];// Optional: Declare a variable that collect input from user
	//Step.1: Declare a pointer variable
	FILE *fptr;
	//Step 2: Open the file Using fopen()

	fptr = fopen("staff_names.txt", "w");
	//check if the pointer variable is pointing to a NULL file
	if (fptr == NULL)
	{
		printf("Error");
		exit (1);
	}
	//Here is where you get input from the User
	printf("Kindly input the staff names: ");
	scanf("%s", str);

	//step 3: Processing information into the file, using fprintf
	fprintf(fptr,"%s", fgets(str, 100, stdin));

	//step 4: Close the file
	fclose(fptr);

	return 0;
}
