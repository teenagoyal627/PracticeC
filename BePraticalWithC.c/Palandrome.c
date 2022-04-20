#include<stdio.h>
int main()
{
int n,r,rev,t;        
printf("Enter the number  ");
scanf("%d",&n);
rev=0;
t=n;
while(n>0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("Reverse of number is -%d",rev);
if (rev==t)
printf("\nNumber is palandrome  ");
return 0;
}
