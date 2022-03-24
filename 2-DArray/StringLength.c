#include<stdio.h>
int main()
{
int i,l=0;
char a[10];
printf("Enter the string  ");
scanf("%s",a);
for(i=0;a[i]!=0;i++)
{
    l=l+1;

}
printf("length of  string  %d",l);
return 0;
}