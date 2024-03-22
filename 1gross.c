#include <stdio.h>

void main()
{
    float basic_salary, da, hra, ta, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    da = 0.5 * basic_salary;
    hra = 0.3 * basic_salary;
    ta = 1800;
    gross_salary = basic_salary + da + hra + ta;
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Travel Allowance (TA): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross_salary);
}
