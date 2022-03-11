#include<stdio.h>
int main()
{
int n,rev=0,r;
printf("Enter the number between 9 and 100  ");
scanf("%d",&n);
if(n<9 || n>=100)
{
    r=n%10;
   rev=rev*10+r;
    n=n/10;
     //rev=rev*10+r;
}
printf("reverse is %d",rev);

return 0;
}
