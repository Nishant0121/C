#include <stdio.h>

void main()
{
    int marks;
    printf("Enter the marks scored: ");
    scanf("%d", &marks);

    if (70 <= marks && marks <= 100)
    {
        printf("Distinction\n");
    }
    else if (60 <= marks && marks <= 69)
    {
        printf("First Class\n");
    }
    else if (50 <= marks && marks <= 59)
    {
        printf("Second Class\n");
    }
    else if (40 <= marks && marks <= 49)
    {
        printf("Pass\n");
    }
    else if (0 <= marks && marks < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks Entered\n");
    }
}
