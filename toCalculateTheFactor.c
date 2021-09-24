#include<stdio.h>
int main()
{
    int number,i ;
    printf("To calculate the factor of a number\n");
    printf("Enter a number  ");
    scanf("%d",number);
    int*s=malloc(sizeof(int)*number);
    int result;
    for(i=0;i<=100;i++){
    result=number/s[i];
    if(
        
    )
{
    printf("\nthe factor of %d is %d",number,result);
}
    else
{
    printf("not complitely divide");
}
}
    return 0;
}