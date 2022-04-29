#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,j;
printf("Enter a string   ");
scanf("%s%s",a,b);
for(i=0;a[i]!=NULL;i++)
{
    b[i]=a[i];
}
 b[i]=NULL;
 printf("%s",b);
return 0;
}
