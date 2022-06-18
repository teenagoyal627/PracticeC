#include<stdio.h>
#include<string.h>
int main ()
{
    typedef struct student 
    {
        char name[20];
        int c;
        int rollno;

    }student;
    student a[20];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the Name  of student  %d ",i+1);
        scanf("%s",a[i].name);
        scanf("%d%d",&a[i].c ,&a[i].rollno);
    }
    printf("Student's Details  \n");
    printf("Name\tClass\tRollno\n");
    for (i=0;i<5;i++)
    {
        printf("%s\t",a[i].name);
        printf("%d\t",a[i].c);
        printf("%d\n",a[i].rollno);
        //return 0;
    }
            return 0;

}