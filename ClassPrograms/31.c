#include<stdio.h>
int main()
{
    int i,n,c;
    printf("Enter a number  ");
    scanf("%d",&n);
    c=0;
    i=1;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
    return 0;
}