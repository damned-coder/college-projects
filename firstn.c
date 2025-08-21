#include<stdio.h>
void main()
{
    int x,n;
    printf("This will print the first n natural numbers.\n");
    scanf("%d",&n);
    for(x=1;x<n+1;x=x+1)
    {printf("%d\n",x);}
}
