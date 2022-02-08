#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the number  ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        a=i*i;
        printf("%d",a);
        i++;

    }
    return 0;

}