#include <stdio.h>

void main() 
{
    float length, width, area;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    // Calculate the area of the rectangle
    area = length * width;
    printf("Area of the rectangle: %.2f\n", area);
}

