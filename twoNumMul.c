#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter first number  ");
    scanf("%d",&number1);
    printf("enter second number   ");
    scanf("%d",&number2);
    int result=number1*number2;
    printf("%d*%d=%d",number1,number2,result);
    return 0;
}
