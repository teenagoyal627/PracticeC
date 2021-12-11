#include<stdio.h>
//two  intezer number are equal or not
int main()
{
    int a,b;
    printf("enter two number\n  ");
    scanf("%d%d",&a,&b);
    
    if(a==b)
    {
        printf("both are equal ");
    }

    if(a!=b)
    {
    printf("not equal");
    }
    return 0;
}