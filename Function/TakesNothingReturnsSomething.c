#include<stdio.h>
int main()
{
 void sum (int);
 int a;
printf("Enter the numbers  ");
scanf("%d,&a");
sum (a);
printf("%d",a);
return 0;
}
void sum (int x)
{
   // return(x);
   printf("U entered = %d\n",x);
   x=x+10;
}
