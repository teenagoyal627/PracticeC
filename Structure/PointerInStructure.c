//WAP related to the item 
#include<stdio.h>
#include<string.h>
struct item
{
    int i_no;
    char iname[10];
    int quan;
    int price;
    
};
int main()
{
    struct item i1;
   struct item *p;
    p=&i1;
    printf("Enter the item code,item name,quantity,and price   \n");
    scanf("%d%s  ",&p->i_no,p->iname );
    scanf("%d%d",&p->quan,&p->price );
    printf("Item code =%d\n",(*p).i_no);
    printf("Item Name=%s \n",p->iname );
    printf("Item Quan.=%d\n",(&i1)->quan);
    printf("Unit Price =%d\n",i1.price);
    return 0;
}