#include<stdio.h>
int main()
{
    int x, y;
    printf("Give me a number.");
    scanf("%d",&x);
    if(x<0)
    x=-x;
    while(x>0)
    { int a;
      a=x%10;
      x/=10;
      printf("%d",a);
    }

    return(0);
}