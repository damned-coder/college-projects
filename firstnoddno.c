#include<stdio.h>
void main()
{
    int x,n;
    printf("This will print the first n odd numbers.\n");
    scanf("%d",&n);
    for(x=1;x<n+1;x=x+2)
    {printf("%d\n",x);}
}
