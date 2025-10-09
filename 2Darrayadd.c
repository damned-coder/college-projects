#include<stdio.h>
void main()
{
    int x[2][2], y[2][2], z[2][2];
    printf("Give me the first array:");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
    printf("Give me second array:");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2;j++)
        {
        scanf("%d",&y[i][j]);
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2;j++)
        {
        z[i][j]=x[i][j]+y[i][j];
        printf("%d\t",z[i][j]);
        } 
    }
}