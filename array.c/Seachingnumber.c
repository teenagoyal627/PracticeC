#include<stdio.h>
int main()
{
int a[5],i,j;
printf("Enter the values  in a  ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter a number ");
scanf("%d",&j);
for(i=0;i<5;i++)
{
    if(a[i]==j)
    {
    //printf("number is in array");
    printf("%d",i);
    break;
    }
}
    //else
 
    //printf("Not same");
if(i==5)
printf("Not found  ");

return 0;
}
