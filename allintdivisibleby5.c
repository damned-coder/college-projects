#include<stdio.h>
int main ()
{
int x;
printf("All the numbers divisible by 5 are:");
for(int i=0; i<=100; i++)
{
    if(i%5==0)
    printf("%d\t",i);
}
}