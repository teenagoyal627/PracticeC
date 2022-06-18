#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct { 
        char name[20];
        char mode[20];
        int price;
    }mobile;
    mobile m1 ={"tata","m31","7890"};
    mobile m2,m3;
    m2=m1;
    strcpy(m3.name ,"airtel");
    strcpy(m3.mode ,"m32");
    m3.price=m1.price;
    printf("Details of mobiles   \n");
    printf("Company name  %s \n",m1.name);
    printf("Model name %s \n",m1.mode);
    printf("Price %d",m1.price);
    printf("\n\n\n");
    printf("Company name  %s \n",m2.name);
    printf("Model name %s \n",m2.mode);
    printf("Price %d",m2.price);
    
printf("Company name  %s \n",m2.name);
    printf("Model name %s \n",m2.mode);
    printf("Price %d\n",m2.price);
    printf("\n");
  return 0;  
}