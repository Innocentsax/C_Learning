#include <stdio.h>
#include <string.h>

//Struct is a Data structure that we can store group of Data types
//such as char, int, double and string.
struct Phone //Attribute of my phone
{
	char name[35];
	char version[20];
	int warranty;
	double ipm;
};

int main()
{
	struct Phone samsung;
	samsung.warranty = 2;
	samsung.ipm = 119.657;
	strcpy( samsung.name, "A03\n");
	strcpy( samsung.version, "Private\n");

	struct Phone nokia;
	nokia.warranty = 5;
	nokia.ipm = 234.987;
	strcpy( nokia.name, "Spark");
	strcpy( nokia.version, "terminal");

	struct Phone gionee;
	gionee.warranty = 24;
	gionee.ipm = 2387.678;
	strcpy( gionee.name, "Charming");
	strcpy( gionee.version, "Public");


	printf("%lf\n", nokia.ipm);	
}
