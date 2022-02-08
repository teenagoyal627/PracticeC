#include<stdio.h>
int main()
{
    int i,n,s;
    s=0;
    printf("Enter the number  ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        s=s+i;
        i++;
    }
    printf("%d",s);
    
    return 0;

}