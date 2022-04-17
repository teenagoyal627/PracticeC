#include<stdio.h>
int main()
{
float bs,gs,hra,da;
printf("Enter the basic salary of a person");
scanf("%f",&bs);
if(bs<=5000)
{
    da=(bs*45)/100;
    hra=(bs*10)/100;
}
else
{
    da=(bs*55)/100;
    hra=(bs*15)/100;

}
gs=bs+hra+da;
printf("%f",bs);
printf("\n%f",hra);
printf("\n%f",da);
printf("\n%f",gs);
return 0;
}


