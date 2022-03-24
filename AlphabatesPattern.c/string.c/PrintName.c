//#include<str.h>
#include<stdio.h>
/*int main()
{
char name[]="Teena" ;
char *ptr;
ptr=name;
printf("%c",*ptr);
int i=0;
while(name[i]!=NULL)
{
printf("%c",name[i]);
i++;*/


//return 0;
//}

#include<stdio.h>
int main()
{
int a[5],i;
printf("Enter the values in a  ");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{
    
    printf("%d",a[i]);
}
return 0;
}

