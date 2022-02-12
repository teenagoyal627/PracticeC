#include<stdio.h>
int main()
{
    int n,i,j,s;
    printf("Enter the number  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(i%2==0)
            printf("%d",i);
            else
            printf("*");
        }
        printf("\n");
    }
    }
