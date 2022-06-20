#include<stdio.h>
int main()
{
    int a,b,c,*pa,*pb,*pc;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("Enter the values of a and b  ");
    scanf("%u%u",pa,pb);
    *pc=*pa+*pb;
    printf("The sum of two number is     %d\n",*pc);
    printf("The value of a = %d and b = %d and c =%d \n",*pa,*pb,*pc);
}