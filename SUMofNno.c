#include<stdio.h>
int main() 
{
    int n ;
    int x=0;
    printf("Give me a positive integer:");
    scanf("%d",&n);
    for (int i=1; i<=n; i++ )
    {
    x= x + i;
    }
printf("The sum of %d numbers is %d",n,x);
}
