#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two number  ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Exchange values is a=%d b=%d",a,b);
    return 0;
}