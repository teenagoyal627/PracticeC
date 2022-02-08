#include<stdio.h>
int main()
{
    int i,b,p,s;
    s=1;
    printf("Enter the base and power  ");
    scanf("%d%d",&b,&p);
    i=1;
    while(i<=p)
    {
        s=s*b;
        i++;
    }
    printf("%d",s);
    return 0;
}