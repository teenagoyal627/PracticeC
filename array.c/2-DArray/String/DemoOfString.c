#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i,l=0;
printf("Enter a string  ");
gets(a);
for(i=0;a[i]!=0;i++)
{
    l=l+1;
}
printf("%d",l);
return 0;
}
