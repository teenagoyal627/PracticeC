#include<stdio.h>
int main()
{
    int a ,*p; 
    float b,*q;
    a=10;
    b=2.9;
    p=&a;
    q=&b;
    printf("address of a is %u  \n",*p);
    printf("value of a is  %d\n",a);
    printf("address of b is %f \n",*q);
    printf("value of b is  %f  \n",b);
    return 0;
}