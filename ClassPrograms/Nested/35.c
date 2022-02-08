#include<stdio.h>
int main()
{
    int rev,n,r,t;
    printf("Enter the number  ");
    scanf("%d",&n);
    rev=0;
        t=n;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(rev==t)
        printf("palaindrom number");
        else
        printf("Not palidrome number");
        return 0;

}