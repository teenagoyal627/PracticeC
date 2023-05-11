#include<stdio.h>
int main()
{
    void change (int*); 

    int a ,b;
    printf("Enter the value of a  ");
    scanf("%d",&a);
    printf("\nThe value of a before calling change function is %d   ",a);
    change(&a);     //call by reference
       change(&a);
    printf("\nAfter callin change function  the value of a is %d  ",a);
    printf("\n");
    return 0;
}
void change (int *p)
{
    *p=*p+10;
    
}