#include <stdio.h>

void main()
{
    int num1, num2, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result of addition: %d\n", result);
        break;

    case 2:
        result = num1 - num2;
        printf("Result of subtraction: %d\n", result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result of multiplication: %d\n", result);
        break;

    case 4:
        int division_result = num1 / num2;
        printf("Result of division: %d\n", division_result);
        break;

    case 5:
        result = num1 % num2;
        printf("Result of modulus: %d\n", result);
        break;

    default:
        printf("Invalid choice. Please select a valid option (1-5).\n");
    }
}
