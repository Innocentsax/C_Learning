#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	fp = fopen("Inno.txt", "w");
	fprintf(fp, "%s", "Hello Innocent");
	fclose(fp);

}
