#include<stdio.h>
int main()
{
char ch;
printf("Enter the character   ");
scanf("%c",&ch);
switch (ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("vowel  ");
    break;

default:
printf("Not a vowel  ");
    break;
}
return 0;
}
