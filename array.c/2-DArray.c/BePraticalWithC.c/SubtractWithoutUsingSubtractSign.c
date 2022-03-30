#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two integer");
scanf("%d%d",&a,&b);
c=a+~b+1;
printf("Difference of two integer is %d",c);
return 0;
}
