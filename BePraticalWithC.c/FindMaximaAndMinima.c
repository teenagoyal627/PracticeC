#include<stdio.h>
int main()
{
int num ,r,min,max;
printf("Enter the number  ");
scanf("%d",&num);
min=max=num%10;
while(num!=0)
{
    r=num%10;
    if (max<r)
    max=r;
    if (min>r)
    min=r;
    num=num/10;
}
printf("number is maximum  %d\n",max);
printf(" number is mininum   %d",min);
return 0;
}
