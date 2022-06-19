#include<stdio.h>
#include<string.h>
struct address 
{
    int h_no;
    int s_no;
    char city[20];
    char state[20];

};
union person
{
    char name[10];
    int age;
    struct address add;
};
int main ()
{
    union person p;
    printf("Enter the house number and state number of person ");
    scanf("%d%s",&p.add.h_no,p.add.state);
    printf("house number and state name of person %d   %s\n",p.add.h_no,p.add.state);
    printf("\nENter the details of person  ");
    printf("\nEnter the name of person and age of person ");
  scanf("%s%d",p.name,&p.age);
  printf ("\nName of person and age of person %s   %d\n",p.name,p.age );
    return 0;
}