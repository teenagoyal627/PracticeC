#include<stdio.h>
int main()
{
    int f1,f2,f3,n,i;
    printf("Enter the number  ");
    scanf("%d",&n);
    f1=1;
    f2=0;
    i=1;
    while(i<=n)
    {
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}