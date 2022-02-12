#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the value of a  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)

    {
        printf("%d",a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
    return 0 ;
}