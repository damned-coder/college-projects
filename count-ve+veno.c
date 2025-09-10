#include<stdio.h>
int main()
{
    int x, y=0, z=0, a=0;
    printf("This will count number of +ve, -ve and zero values.");
    for(int n=0; n<20; n++)
    {scanf("%d",&x);
        if(x>0)
        y++;
    else if(x==0)
        z++;
    else
    a++;
    }
    printf("The number of positive terms are %d, zeroes are %d and negative numbers are %d",y ,z ,a);
    return(0);
}