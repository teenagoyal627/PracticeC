#include<stdio.h>
int main()
{
int a[3][3],i,j,b[3][3],c[3][3];
printf("Enter the value of a  ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the value of b  ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);

    }
    printf("\n");
}
return 0;
}
