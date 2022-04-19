#include<stdio.h>
int main()
{
int a; 
printf("Enter 0,1,2  ");
scanf("%d",&a);
switch (a)
{
case 0:
printf("enter number is 0");
//break;
case 1:
printf("enter number is 1  ");
//break;
case 2:
printf("enter number is 2  ");
break;
default:
printf("other than 0,1,2");
}
return 0;
}
