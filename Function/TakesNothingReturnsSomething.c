#include<stdio.h>
int main()
{
 void sum (int);
 int a,b,s;
printf("Enter the numbers  ");
scanf("%d%d,&a,&b");
s=sum (a,b);
printf("%d",s);
return 0;
}
void sum (int c,int d)
{
    
    return(c+d);
}
