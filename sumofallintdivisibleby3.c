#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=0; i<=100; i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
printf("Sum of all numbers divisible by 3 between 1 and 100 is:%d",sum);
}