#include<stdio.h>
int main()
{
    int a[5],i,s=0;
    printf("Enter the value of a  ");
    for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    if(a[i]%2==0)
    {
        s=s+a[i];
    
    printf("%d",a[i]);
    printf("\n%d",s);
}

}
return 0;
}