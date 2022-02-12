#include<stdio.h>
int main()
{
    int i,s,n,t,r;
    printf("Enter the number  ");
    scanf("%d",&n);
    t=n;
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
        if(s==t)
        printf("armstrong number ");
        else
        printf("not armstrong");

    return 0;
}
