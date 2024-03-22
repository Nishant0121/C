#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int physics;
    int chemistry;
    int math;
    int total;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Physics marks: ");
        scanf("%d", &students[i].physics);
        printf("Chemistry marks: ");
        scanf("%d", &students[i].chemistry);
        printf("Math marks: ");
        scanf("%d", &students[i].math);
        students[i].total = students[i].physics + students[i].chemistry + students[i].math;
    }

    // Sort students based on total marks (descending order)
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (students[i].total < students[j].total)
            {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nMerit List (Highest to Lowest Total Marks):\n");
    printf("------------------------------------------------\n");
    printf("| Roll | Name          | Total Marks |\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < n; ++i)
    {
        printf("| %-4d | %-12s | %-11d |\n", students[i].roll, students[i].name, students[i].total);
    }
    printf("------------------------------------------------\n");

    return 0;
}
