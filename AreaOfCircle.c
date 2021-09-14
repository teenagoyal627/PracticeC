#include<stdio.h>
int main()
{
    float radius,pie=3.14,result;
    printf("To calculate the area of circle\n");
    printf("enter radius of circle   ");
    scanf("%f",&radius);
    result=pie*radius*radius;
    printf("%f",result);
     return 0;
}