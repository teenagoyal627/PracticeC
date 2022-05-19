#include<stdio.h>
int main()
{
int n;
printf("Enter the number  ");
scanf("%d",&n);
if(n>0)
printf("Greate than zero  ");
else if(n==0)
printf("number is zero ");
else if(n<100)
{
printf("\nNumber is positive ");
printf("\nNumber is less than 100");
}
else
printf("Number is negative");
return 0;
}
