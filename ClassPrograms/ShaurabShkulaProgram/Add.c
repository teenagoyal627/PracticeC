/*Takes something returns nothing*/
#include<stdio.h>
void add( int,int); //gobal declaration
void main()
{
    int x,y;
    printf("Enter the two number  ");
    scanf("%d %d",&x,&y);
   
    add(x,y);//actual argument:call by value
  
}
void add(int a,int b)//formal argument
{
    int c;
    c=a+b;
    printf("sum is %d",c);

}