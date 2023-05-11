#include<stdio.h>
int main()
{
    void swap (int *,int *);
    int a,b,*p,*q;
    printf("Enter the values of a and b   ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\nthe values of a and b after swaping  %d and %d ",a,b);
    printf("\n");
    return 0;
}
void swap (int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}