#include <stdio.h>

void main() 
{
    float side, area;
    printf("Enter side length of the square: ");
    scanf("%f", &side);

    // Calculate the area of the square
    area = side * side;
    printf("Area of the square: %f\n", area);
}

