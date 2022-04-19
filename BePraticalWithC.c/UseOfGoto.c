#include<stdio.h>
#include<math.h>
int main()
{
int a;
start:
printf("Enter the +ive number  ");
scanf("%d",&a);
if(a<0)
goto start;
printf("sqrt of number is %f ",sqrt(a));
return 0;
}
