#include<stdio.h>
struct item
{
    char name[19];
    int icode;
    int iprice;
};
int main()
{
    struct item i1;
    strcpy(i1.name,"teena");
  i1.icode=54;
  i1.iprice=56;
  printf("Name=%s \t icode=%d\t  iprice=%d  " ,i1.name,i1.icode,i1.iprice);
  return 0;
}