#include<stdio.h>
void main()
{
    int x[10];
    printf("Give me 10 values:");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("%d\t%d\t%d\t",x[3],x[6],x[8]);
}