#include<stdio.h>
#include<string.h>
struct data
{
    int day;
    int month;
    int year;

};
struct employee
{
    char name[10];
    char dept[25];
    char qual[10];
    struct data d;   //nested structure
};
int main()
{
    //struct employee e;
    struct employee e = {"Teena\t","computerscience\t","BTECH\t",{06,02,2003}}      ;
    struct data *p= &e.d;
    printf("Enter the Details of Employee  \n");
    printf("Name of Employee is  %s  \n",e.name);
    printf("Department name of Employee   %s \n",e.dept );
    printf("Quality of Employee %s\n",e.qual);
    printf("DOB of Employee  %2d/%2d/%2d  \n",p->day,p->month,p->year );
    return 0;
}