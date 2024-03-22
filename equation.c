#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int x[n], y[n], z[n];
    printf("Enter the elements of X: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter the elements of Y: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }
    printf("Enter the elements of Z: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &z[i]);
    }
    int Ans = 0;
    for (int i = 0; i < n; i++)
    {
        Ans += (x[i] * y[i]) + (x[i] * z[i]) + (y[i] * z[i]);
    }
    printf("The value of Ans: %d\n", Ans);
}
