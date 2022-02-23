#include<stdio.h>
int main()
{
int a[5],i,sum=0,avg ; 
printf("Enter the marks of five students  ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
//describtion;
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
    printf("%d",sum);
    printf("\n");
    avg=sum/5;
    printf("%d",avg);

return 0;
}
