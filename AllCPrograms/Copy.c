#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[10],b[10];
    printf("Enter the values in a    ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
         b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",a);
    printf("\n\n");
    // printf("%s",b);
       

       strcpy(b,a);
    printf("%s",b);

    char c[10];
    printf("enter the values of c  ");
    scanf("%s",c);
    strlwr(c);
    printf("%s",c);
    return 0;
}