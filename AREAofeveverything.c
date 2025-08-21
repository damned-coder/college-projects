#include<stdio.h>
void main()
{
    int x;
    float y;
    int a;
    float z;
    printf("Press 1 for area of square\nPress 2 for area of rectangle\nPress 3 for area of circle\nPress 4 for area of triangle");
scanf("%d",&x);
if(x==1)
{
    printf("Give me the side of the square.");
    scanf("%f",&y);
z=y*y;
printf("The area of the square is: %0.2f sqr unit.",z);
}
else if(x==2)
{
    printf("Give me the length and breadth of the rectangle.");
    scanf("%f%d",&y,&a);
z=y*a;
printf("The area of the rectangle is: %0.2f sqr unit.",z);
}
else if(x==3)
{
printf("Give me the radius of the circle.");
scanf("%f",&y);
z=3.14*y*y;
printf("The area of the circle is: %0.2f sqr unit",z);
}
else if(x==4)
{
printf("Give me the height and the base of the triangle.");
scanf("%f%d",&y,&a);
z=(y*a)/2;
printf("The area of the triangle is: %0.2f sqr unit",z);
}
}