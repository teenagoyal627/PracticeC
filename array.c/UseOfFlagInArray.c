#include<stdio.h>
int main()
{
int a[5],i,num,flag=0;
printf("Enter the value in a  ");
for(i=0;i<=4;i++)
{
   scanf("%d",&a[i]);
}
printf("Enter the number which you want to search  ");
scanf("%d",&num);
for(i=0;i<=4;i++)
{
    if (a[i]==num)
    {
        printf("%d",i);
        break;

    }
}
    if(i==5)
    printf("sorry not found  ");

return 0;
}
