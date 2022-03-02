#include<stdio.h>
#include<math.h>
int main()
{
float s,a,b,c;
float Area;
printf("Enter the sides of triangle  ");
scanf("%f%f%f",&a,&b,&c);
s=a+b+c/2;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",Area);//describtion;
return 0;
}
