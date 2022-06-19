#include<stdio.h>
#include<string.h>
struct emp
{
    char name[10];
    int sal;
    char qual[10];
};
int main()
{
    struct emp e ={"Teena ",500000,"BTECH"};
    void show (emp);
    show (e);
    return 0;
}

void show (emp p)
{
    printf("Details of Employee");
    printf("\nName\t%s",p.name);
    printf("\nSalary\t%d\n",p.sal);
    printf("Quality of Empolyee %s\n",p.qual);
    
}