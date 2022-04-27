#include<stdio.h>
int main()
{
int a[10],i; 
printf("Enter the value in a   ");
for(i=0;i<10;i++)
{
    scanf("\n%d",&a[i]);
}
printf("Array elements are   ");
for(i=0;i<10;i++)
{
    printf(" %d ",a[i]);
}
return 0;
}
