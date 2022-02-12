#include<stdio.h>
int main()
{
    int i,n,s,j,k;
    printf("Enter the number  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            for(s=1;s<=n-i;s++)
            {
                printf(" ");
            }
            for(j=n;j>=n-i+1;j--)
            {
                printf("%d",j);

            }
            for(k=j+2;k<=n;k++)
            {
                printf("%d",k);
            }
            printf("\n");
        }
        return 0;
}
