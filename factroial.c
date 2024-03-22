#include <stdio.h>

void main()
{
    int num1, fact = 1;
    printf("Enter the number:");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", num1, fact);
}