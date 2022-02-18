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

    for(j=1;j<=2*i-1;j++)
    {
     if(j%2==0)
     printf("  .....  ");
     else
     printf("* ");
        
    }

    
    printf("\n");
}

return 0;
}
