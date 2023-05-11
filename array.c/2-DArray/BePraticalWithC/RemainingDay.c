#include<stdio.h>
int main()
{
int a,m,r;
printf("Enter total days  ");
scanf("%d",&a);
m=a/30;
r=a%30;
printf("The total month is %d",m);
printf("\nRemaining days %d",r);
return 0;
}
