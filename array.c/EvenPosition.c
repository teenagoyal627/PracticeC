#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the value of a  ");
    for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    if(a[i]%2==0)
{
    printf("Even number  ");
    printf("%d",a[i]);
}
    else

{
    printf("Odd number  ");
    printf("%d",a[i]);
}
}
return 0;
}