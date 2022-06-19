//details about the address of person and about himself
#include<stdio.h>
#include<string.h>
int main()
{
    struct address
    {
        char h_no [6];
        int  s_no;
           char city[10];
           char state[10];

    };
    struct person

    {
        char name[10];
        int age;
        struct address add;
       
        
    };
    struct person p1;
    printf("Enter the name and age of the person    \n");
    scanf("%s%d",p1.name,&p1.age);
    printf("\nEnter the house number ,street number ,city,state   \n");
    scanf("%s%d%s%s",p1.add.h_no,&p1.add.s_no,p1.add.city,p1.add.state  );
    printf("                               Person Details    \n");
    printf("%s\n%d\n",p1.name,p1.age );
    printf("%s\n%d\n%s\n%s\n",p1.add.h_no,p1.add.s_no,p1.add.city,p1.add.state);
    return 0;
}