#include<stdio.h>
#include<string.h>
struct emp
{
    char name[20];
    int sal;
    char qual[20];
};
int main()
{
    struct emp e ={"Teena",30000,"BTECH"};
    //void modify (struct emp*);
    //modify(&e);
    struct emp p;
   printf("Details of Empolyee\n");
   printf("Name %s\n",e.name);
   return 0;

    
}