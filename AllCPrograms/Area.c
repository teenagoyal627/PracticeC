
#include<stdio.h>
int main()
{
    int l,b,a;
    printf("Enter the  length and breadth of rectangle ");
   scanf("%d%d",&l,&b);
     if(l>b)
     {
        a=l*b;
        printf("The area of rectangle is %d  ",a);
     }
   }