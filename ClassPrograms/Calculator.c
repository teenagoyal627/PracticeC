#include<stdio.h>
//write a program of calculator
int  main()
{
int a,b,A,S,M,D;
printf(" Enter the numbers   ");
scanf("\n%d%d ",&a,&b);
A=a+b;
printf("the addition of a and b is %d  ",A);
S=a-b;
printf("\nthe subtraction of a and b is %d ",S);
M=a*b;
printf("\nthe multiplication of a and b is %d  ",M);
D=a/b;
printf("the division of a and b is  %d  ",D);

return 0;
}