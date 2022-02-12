#include<stdio.h>
int main()
{
    int a[5],i,n;
    printf("Enter the value of a  ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
        printf("%d",i);
        break;
        }
    }
    if(i==5){
    printf("sorry not found");}
return 0;
}
