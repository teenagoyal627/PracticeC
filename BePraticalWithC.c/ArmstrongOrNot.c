#include<stdio.h>
int main()
{
int n,s,r,t,i; 
printf("Enter the number   ");
scanf("%d",&n);
n=t;
s=0;
while(i<1000)
{
    i=n;
while(n>0)
{
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
}
if(s==t)
{
printf("Enter number is armstrong  ");
}
else 
printf("not ");
return 0;
}
