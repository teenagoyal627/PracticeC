#include<stdio.h>
#include<string.h>
union person
{
    char name[10];
    int age;
    int mob;
};
int main()
{
    union person p1;
    printf("Enter the name of person \n");
    scanf("%s",p1.name);
    printf("Name of person is %s ",p1.name);
    printf ("\nEnter the age of person ");
    scanf("%d",&p1.age);
    printf("The age of person is %d",p1.age);
    printf("\nEnter the mobile number of person");
    scanf("%d",&p1.mob);
    printf("The mobile number of person %d \n",p1.mob);
    return 0;
}