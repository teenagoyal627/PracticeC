#include<stdio.h>
int main()
{
    int a,*pa,**ppa;
    a=89;
    pa=&a;
    ppa=&pa;
    printf("the address of a is  %u \n",&a);
    printf("The address of pa is %u \n",&pa);
    printf("The address of ppa is %u  \n",*ppa);
    printf("The value of a is %d \n",a);
    printf("value of pa is %d  \n",*pa);
    printf("THe values of ppa is %d  \n",**ppa);
    return 0;
}