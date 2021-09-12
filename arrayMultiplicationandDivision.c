// to calculate the  multiplication and division in array
#include<stdio.h>
int main()
{
int i,totalnumber  ;
printf("How many numbers you want to take \n ");
scanf("%d",&totalnumber);
int *s=malloc(sizeof(int)*totalnumber);
printf("enter %d numbers\n ",totalnumber);
for(i=0;i<totalnumber;i++){
    printf("enter %d number  ",i+1);
scanf("%d",&s[i]);
}
printf("multiplication of");
for(i=0;i<totalnumber;i++){

if(i==totalnumber-1){
    printf("%d=",s[i]);
}
else
{
printf("%d,",s[i]);
}
}
int result1;
// /  %d numbers is  ",i);
result1=1;
for(i=0;i<totalnumber;i++){
    result1=result1*s[i];
}
printf("  %d\n",result1);
// now calcualting addition
printf("addition of ");
for(i=0;i<totalnumber;i++){
    if(i==totalnumber-1){
    printf("%d=",s[i]);
    }
    else{
        printf("%d," ,s[i]);
    }
}
// %d numbers is   ",i);

int result2;
result2=0;
for(i=0;i<totalnumber;i++){
    result2=result2+s[i];
}
printf("%d",result2);

return 0;
}