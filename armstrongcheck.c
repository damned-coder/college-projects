#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, n = 0;
    float a = 0.0;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = x;
    while (y != 0) 
    {
        y /= 10;
        ++n;
    }
    y = x;
    while (y != 0) 
    {
        z = y % 10;
        a += pow(z, n);
        y /= 10;
    }
    if ((int)a == x)
        printf("%d is an Armstrong number.\n", x);
    else
        printf("%d is not an Armstrong number.\n", x);

    return 0;
}