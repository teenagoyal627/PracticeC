#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[]={1,0,3,0,5,0};

printf("Enter the original array  ");
for (i=0;i<=6;i++)
{
    printf(" %d ",a[i]);
}
for(i=0;i<=6;i++)
{
       if(a[i]!=0 && a[i+1]==0)
       a[i+1]=a[i]+1;
}
for(i=0;i<=5;i++)
{
printf("\n%d",a[i]);
}
return 0;
}
