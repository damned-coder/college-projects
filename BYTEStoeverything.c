#include<stdio.h>
void main()
{
    int x;
    float y;
    float z;
    float a;
    printf("Bytes to Kb, Mb, Gb converter.");
    scanf("%d",&x);
    y=x/1024.0;
    z=y/1024.0;
    a=z/1024.0;
    printf("Kb: %.2f\nMb: %.2f\nGb %.2f",y,z,a);


}