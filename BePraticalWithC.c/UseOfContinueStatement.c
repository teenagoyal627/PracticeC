#include<stdio.h>
int main()
{
int t=0;
while(t<=10)
{
    t++;
    if(t%2==0)
    continue;
    
    printf("%d\n",t);
  
}


return 0;
}
