#include <stdio.h>

void main() 
{
    int a,b;
    printf("Enter a: ");
    scanf("%u", &a);

    printf("Enter b: ");
    scanf("%u", &b);

    // Bitwise AND
    printf("Bitwise AND: %d\n",a&b);

    // Bitwise OR
    printf("Bitwise OR: %d\n",a|b);
}

