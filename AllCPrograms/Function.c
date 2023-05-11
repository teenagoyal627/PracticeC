#include<stdio.h>
int main ()
int add(int int );
{
    int a,b,c,add;
    printf("Enter the numbers in a and b  ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("the value of c is  %d ",c);
    return 0;
}
int add(int x,int y);
{
    int r;
    r=x+y;
    return (r);
}