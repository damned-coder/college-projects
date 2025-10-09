#include<stdio.h>
void main()
{
    int x[4][4], k;
    printf("Give me a 4X4 Matrix:");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            k=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=k;
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    
}