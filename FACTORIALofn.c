#include<stdio.h>
void main()
{
    int n;
    int x=1;
    printf("Give me a positive integer:");
    scanf("%d",&n);
    for(int i=1, count=0; count<n;i++ )
    {
        x=i;
        count++;
        printf("%d*",x);

    }
}