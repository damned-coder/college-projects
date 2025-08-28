#include<stdio.h>
void main ()
{
    int x;
    int y;
    for (x=0;x<100;x+=13)
    {
        y=x+y;
    }
    printf("sum of all numbers divisible by 13 between 1 and 100 is:%d",y);
}