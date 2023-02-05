#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//Declare a file pointer variable
	FILE *fp;
	//Open the file using fopen() and write into the file
	fp = fopen("Filename.txt", "w");
	//Process the file using the suitable function
	fprintf(fp, "%s", "HELLO WORLD\n");
	//Close the file using fclose() function
	fclose(fp);

	
	FILE *read;//Pointer variable which is the first step in file handing
	char see[100];//Char variable that read the characters in a file
	read = fopen("Filename.txt", "r");//fopen() to open the file
	printf("%s",fgets(see, 50, read));// get the information of file using fgets and print it out @%s
	fclose(read);// the close the file


	return 0;
}
