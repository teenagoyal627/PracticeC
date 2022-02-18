#include<stdio.h>
int main()
{
int  s,j,i,a;
//char ch;
printf("Enter the no.  ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    for(s=1;s<=a-i;s++)
    {
        printf(" ");
    }

    for(j=1;j<=i;j++)
    {
        printf("*   ");
        
    }

     printf("\n");
    printf("\n");
}

return 0;
}
