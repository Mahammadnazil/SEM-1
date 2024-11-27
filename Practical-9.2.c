#include <stdio.h>
#include <math.h>

void main() 
{
    float radius, area;
    printf("Enter radius of the circle:");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;
    printf("Area of the circle: %f\n",area);
}

