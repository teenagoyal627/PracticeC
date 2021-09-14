// to calculate the hypotenuse of triangle
#include<stdio.h>
#include<math.h>
int main()
{
    int base,perpendicular,hypotenuseSquare;
    printf("enter base of triangle=  ");
    scanf("%d",&base);
    printf("enter perpendicualr of triangle =   ");
    scanf("%d",&perpendicular);
    printf("the hypotenusesqare of triangle is");
    hypotenuseSquare=base*base+perpendicular*perpendicular;
  printf(" %d = %d*%d + %d*%d\n",hypotenuseSquare,base,base,perpendicular,perpendicular);
      
    float hypotenuse= sqrt(hypotenuseSquare);
    printf(" the  hypotenuse is %f  ",hypotenuse);

    return 0;
}