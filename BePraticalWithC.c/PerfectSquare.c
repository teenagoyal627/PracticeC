#include<stdio.h>
#include<math.h>
int main()
{
int num,a,ps; 
float f;
printf("Enter a number  ");
scanf("%d",&num);

a=sqrt(num);
f=floor(a);
if(a==f)
{
    printf("Number is perfect square   ");
    ps=a*a;
    printf("\n%d",ps);
}
else{
    printf("number is not perfect square  ");
}
return 0;
}

