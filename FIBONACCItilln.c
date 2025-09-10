#include <stdio.h>

void main()
{
    int n, i;
    int x = 0, y = 1, z;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
    }
    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
    }
    printf("\n");
}