#include<stdio.h>
void main()
{
    int a[5];
    printf("Give me five values:");
    for(int i=0; i<5; i++)
    {
       scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}