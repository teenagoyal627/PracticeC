#include<stdio.h>
int main()
{
int  n,i,j,a=0;
printf("Enter a number  ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=i;j>=1;j--)
    { 
        printf("*");

    }
    printf("\n");
}
return 0;
}
