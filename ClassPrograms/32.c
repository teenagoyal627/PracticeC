#include<stdio.h>
int main()
{
    int i,n,r,c;
   
    printf("Enter a number  ");
    scanf("%d",&n);
    c=0;
    while(n>0)
    {
        r=n%10;
        if(r%2==0 )
        c=c+1;
        n=n/10;
    }
printf("%d",c);

    return 0;

    
    }