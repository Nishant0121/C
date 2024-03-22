#include <stdio.h>

void main()
{
    int num, copy, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy = num;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if (sum == copy)
    {
        printf("%d is an Armstrong number\n", copy);
    }
    else
    {
        printf("%d is not an Armstrong number\n", copy);
    }
}
