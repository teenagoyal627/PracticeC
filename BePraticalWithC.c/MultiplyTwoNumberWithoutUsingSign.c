#include<stdio.h>
int main()
{
int a,b,p=0,t=1;
printf("Enter two number   ");
scanf("%d%d",&a,&b);
while(t<=a)
{
    p=p+b;
    t++;
}
printf("Multiplication of two number is %d ",p);
return 0;
}
