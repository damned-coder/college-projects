#include<stdio.h>
#include<math.h>
float main()
{
    printf("Enter principle amount\n");
    float p ,i ,n ,x ;
    scanf ("%f",&p);
    printf("Enter interest rate\n");
    scanf("%f",&i);
    printf("Enter number of periods\n");
    scanf("%f", &n);
    x = p * pow((1 + i/100), n);
    printf("The total amount is %f",x);
}