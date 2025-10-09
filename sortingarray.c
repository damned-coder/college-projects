#include<stdio.h>
void main()
{
    int n;
    printf("SORT INTO ASCENDING ORDER.\nHow many numbers do you want to use ?");
    scanf("%d",&n);
    int x[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=n; j>0;j--)
{
    for(int i=0;i<j;i++)
    {
        if(x[i]>x[i+1])
        {int a;
        a=x[i];
        x[i]=x[i+1];
        x[i+1]=a;
        }
    }
}
    for(int i=0;i<n;i++)
    {printf("%d\t",x[i]);}
}