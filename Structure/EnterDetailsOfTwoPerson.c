#include<stdio.h>
#include<string.h>
struct person
{
    int age;
    char name[10];
};
//typedef struct  Per p1;
int main()
{
   struct person p1 ,p2;
    printf("Enter the age and name of 1st person   ");
    scanf("%d %s",&p1.age,p1.name);
   printf("\nEnter the name and age of 2nd person   ");
    scanf("%d %s",&p2.age,p2.name);
    printf("Details of 1st person    ");
    printf("Age = %d\n and Name = %s\n ",p1.age,p1.name );
    printf("Details of 2nd person  ");
       printf("Age = %d\n and Name = %s\n ",p2.age,p2.name );
        return 0;

}