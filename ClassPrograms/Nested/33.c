#include<stdio.h>
int main()
{
    int c,n,s,r;
    printf("Enter a number  ");
    scanf("%d",&n);
    s=0;
    c=0;
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        
        s=s+r;
        n=n/10;
        
    }
printf("%d",s);

}