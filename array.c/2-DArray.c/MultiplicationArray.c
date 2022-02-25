#include<stdio.h>
int main()
{
int a[3][5],i,j,k,b[5][4],c[3][4]={0,0,0,0,0,0,0,0,0,0,0,0};
printf("Enter the values in a  ");
for(i=0;i<3;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }

}
printf("Enter the value of b  ");
for(i=0;i<5;i++)
{
    for(j=0;j<4;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
    {
       for(k=0;k<5;k++)
       {
           c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
       }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d",c[i][j]);
    }
printf("\n");
}
return 0;
}
