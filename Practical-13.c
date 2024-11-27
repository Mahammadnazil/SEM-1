#include <stdio.h>

void main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check and print the maximum
    if (num1 > num2) 
	{
        printf("The maximum number is: %d\n", num1);
    }
	else if (num2 > num1) 
    {
        printf("The maximum number is: %d\n", num2);
    } 
	else 
	{
        printf("Both numbers are equal.\n");
    }

   
}

