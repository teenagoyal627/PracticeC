#include<stdio.h>
int main()
{
    float length,breadth,height,volume;
    printf("calculate the volume of cuboid \n ");
    printf("enter length of cuboid  ");
    scanf("%f",&length);
      printf("enter breadth of cuboid  ");
    scanf("%f",&breadth);
      printf("enter height of cuboid  ");
    scanf("%f",&height);
volume=length*breadth*height;
printf("the volume of cuboid is %f",volume);
    return 0 ;

}