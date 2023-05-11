#include<stdio.h>
struct person
{
    char name[10];
    int age;
};
int main()
{
    struct person p;
    printf("Enter name of person ");
    scanf("%s",p.name);
    printf("%s",p.name);
    printf("\nenter the age of person");
   scanf("%d",&p.age);
   printf("%d",p.age);
 return 0;
}
