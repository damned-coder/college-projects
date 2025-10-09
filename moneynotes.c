#include<stdio.h>
void main()
{
    int x[9]={500,200,100,50,20,10,5,2,1};
    int y[9];
    int z;
    printf("Give me a Number:");
    scanf("%d",&z);
    for(int i=0; i<9; i++)
    {
        if(z/x[i]>=0)
        {
            y[i]=z/x[i];
            z=z-y[i]*x[i];
        }
    }
    for(int i=0;i<9;i++)
    {
        printf("The number of notes of %d required is %d\n",x[i],y[i]);
    }
}