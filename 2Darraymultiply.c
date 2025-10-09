#include<stdio.h>
void main()
{
    int x[2][2], y[2][2], z[2][2];
    for(int i=0; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            z[i][j]=0;
        }
    }
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
    for(int k=0; k<2;k++)
    {
        for(int j=0;j<2;j++)
        {
            for(int i=0;i<2;i++)
            {
                z[k][j] += x[k][i]*y[i][j];
            }
        }
    }
    printf("The multiplication of the two arrays is:\n");
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}