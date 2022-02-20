#include<stdio.h>
/*factorial with recursion*/

int fact (int n)
{
    if(n>0)
    return(n*fact(n-1));
    else
    return(1);
}
 int main()
 {
     //int n;
     //printf("Enter the number  ");
     //scanf("%d",&n);
     printf("Factorial of 6 is %d",fact(6));
     return 0;
 }