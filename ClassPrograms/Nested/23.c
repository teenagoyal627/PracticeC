#include<stdio.h>
int main ()
{
    int a,b,i,s;
    s=0;
    printf(" Enter two number  ");
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=b)
    {
        s=s+a;
        i++;
    }
    printf("%d",s);
    return 0;
}