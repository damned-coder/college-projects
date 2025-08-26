#include<stdio.h>
void main()
{
    int n;
    int x=1;
    printf("Give me a positive integer:");
    scanf("%d",&n);
    for(int i=1; n>=1;n-- )
    {int z;
        i=i*n;
        
printf("%d*",n);
    x=i;
}
    printf("=%d",x);
}