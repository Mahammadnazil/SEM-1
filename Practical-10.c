#include <stdio.h>

int main() 
{
    int a,b,quotient,remainder;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    quotient = a/b;
    remainder = a%b;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}

