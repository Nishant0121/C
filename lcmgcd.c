#include <stdio.h>

int main()
{
    int num1, num2, choice, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter 1 for GCD, 2 for LCM: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (num1 > num2)
            gcd = num2;
        else
            gcd = num1;

        while (num1 % gcd != 0 || num2 % gcd != 0)
        {
            gcd--;
        }
        printf("GCD is %d\n", gcd);
        break;

    case 2:
        lcm = num1;
        while (lcm % num1 != 0 || lcm % num2 != 0)
        {
            lcm++;
        }
        printf("LCM is %d\n", lcm);
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}
