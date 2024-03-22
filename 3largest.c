#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int large = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("Largest number: %d\n", large);
}