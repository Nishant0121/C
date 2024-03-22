#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int A[n][n];

    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int B[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = A[j][i];
        }
    }

    printf("Result matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf(" %d", B[i][j]);
        printf("\n");
    }
}
