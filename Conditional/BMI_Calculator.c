#include <stdio.h>
#include <stdlib.h>
/**
 * Author - UDO INNOCENT CHARLES || ALX COHORT 11 || 26 JANUARY 2023
 *
 * main - A program that Calculate BODY MASS INDEX (BMI).
 * Return: 0;
 */
int main(void)
{
	//Declaration of variables for storing data.
	float weight, height, bmi;
	
	// Prompt user to input weight in kilogram.
	printf("Kindly enter your weight in kg: ");
	scanf("%f\n", &weight);
	// Prompt user to input height in Meters
	printf("Kindly enter your height in meter: ");
	scanf("%f\n", &height);
	//Here is the calculation for BMI according to the standard formular
	bmi = weight / (height * height);
	// Print out result on the Screen
	printf("Your BMI is %f\n", bmi);
	// Using logical statement to determine the class of the obtained result
	if (bmi < 18)
	{
		printf("You are UNDERWEIGHT\n");
	}
	else if (bmi >= 18 && bmi <= 25)
	{
		printf("Your Weight is NORMAL\n");
	}
	else if (bmi >= 26 && bmi <= 29)
	{
		printf("You are OVERWEIGHT\n");
	}
	else if (bmi >= 30)
	{
		printf("Its OBESITY\n");
		
		if (bmi >= 30 && bmi <= 34)
		{
			printf("You have Class 1 Obesity\n");
		}
		else if (bmi >= 35 && bmi <= 39)
		{
			printf("You have Class 2 Obesity\n");
		}
		else if (bmi >= 40)
		{
			printf("You have Class 3 Obesity\n");
		}
	}

}
