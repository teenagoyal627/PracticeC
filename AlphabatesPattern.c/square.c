#include<stdio.h>
int main()
{
int i,j,s,n;
printf("Enter the number  ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(s=1;s<=n-i;s++)
    {
        printf(" ");
    }
    for(s=1;s<=n+1;s++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("*     ");
    }
    printf("\n");
}
    return 0;
}



