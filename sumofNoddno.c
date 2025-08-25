#include<stdio.h>
int main() 
{
    int n;
    int x=0;
    printf("Give me a positive integer:");
    scanf("%d",&n);
    for (int i=1, count=0;count<n;i+=2)
    {
    x=x+i;
    count++;
    }
printf("The sum of the first %d odd numbers is %d",n,x);
}
