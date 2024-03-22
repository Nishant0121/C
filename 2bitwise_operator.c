#include <stdio.h>

void main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int AND = num1 & num2;
    printf("Bitwise AND (&): %d & %d = %d\n", num1, num2, AND);
    int OR = num1 | num2;
    printf("Bitwise OR (|): %d | %d = %d\n", num1, num2, OR);
    int XOR = num1 ^ num2;
    printf("Bitwise XOR (^): %d ^ %d = %d\n", num1, num2, XOR);
    int NOT = ~num1;
    printf("Bitwise NOT (~): ~%d = %d\n", num1, NOT);
    int LS = num1 << 2;
    printf("Left Shift (<<): %d << 2 = %d\n", num1, LS);
    int RS = num1 >> 2;
    printf("Right Shift (>>): %d >> 2 = %d\n", num1, RS);
}
