#include <stdio.h>

int main()
{
    int x, y, z = 0, a;
    printf("Give me a number: ");
    scanf("%d", &x);

    y = x; 

    if (x < 0)
        x = -x; 
    while (x > 0)
    {
        a = x % 10;
        z = z * 10 + a; 
        x /= 10;
    }

    if (y == z)
        printf("%d is a palindrome.\n", y);
    else
        printf("%d is not a palindrome.\n", y);

    return 0;
}