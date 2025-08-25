#include<stdio.h>
int main() 
{
    int n;
    int x=0;
    printf("Give me a positive integer:");
    scanf("%d",&n);
    for (int i=2, count=0;count<n;i+=2)
    {
    x=x+i;
    count++;
    }
printf("The sum of the first %d even numbers is %d",n,x);
}
