#include <stdio.h>

void main() 
{
    double weight, heightInFeet, heightInMeters, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%lf", &weight);

    printf("Enter your height in feet: ");
    scanf("%lf", &heightInFeet);

    // Convert height from feet to meters
    heightInMeters = heightInFeet / 3.28084;

    // Calculate BMI
    bmi = weight / (heightInMeters * heightInMeters);

    // Check and print BMI category
    printf("Your BMI is: %f\n", bmi);

    if (bmi >= 18.5 && bmi <= 24.9) 
	{
        printf("You are healthy.\n");
    } 
	else 
	{
        printf("You are overweight.\n");
    }

   
}

