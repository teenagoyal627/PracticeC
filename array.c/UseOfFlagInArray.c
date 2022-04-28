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
        flag=1;
        break;

    }
}
    if(flag==1)
    printf("number is exist and its position is %d ",i);
    else

    printf("number is not exist  ");

return 0;
}
