#include <stdio.h>
#include <math.h>

int main()
{
    int x, q=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x<0)
    x=-x;
    if(x==0)
    {q=0;}
    else
    {while(x>0)
        {
            q+=x%10;
            x/=10;
        }

    }
    printf("Sum of the digits is : %d",q);
    return 0;
}
