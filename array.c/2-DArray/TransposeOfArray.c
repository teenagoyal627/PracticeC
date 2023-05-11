#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j;
printf("Enter the value in a ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        a[i][j]=b[i][j];
                 printf("%d",a[i][j]);   
    }

    printf("\n");
}

return 0;
}
