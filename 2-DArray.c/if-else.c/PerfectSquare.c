#include<stdio.h>\
#include<math.h>
int main()
{
int a,b,c,x1,x2,d;

printf("Enter the number in a,b,c ");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
{
    x1=-b/2*a+0;
    x1=x2;
printf("Both the values are different  ");
}
else if (d>0)
{
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("value is %d%d",x1,x2);
}
else 
{
    printf("Both are imaginary   ");
    }

    return 0;
}



