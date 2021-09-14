// array multiplication and addition
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("to calcualte the addition and multiplication in array\n");
    int i,totalNumber;
    printf("How many numbers you want to take\n    ");
    scanf("%d",&totalNumber);
    int *s=malloc( sizeof(int)*totalNumber);
    printf("enter %d number \n ",totalNumber);
    for(i=0;i<totalNumber;i++){
    printf("enter %d number  ",i+1);
    scanf("%d",&s[i]);
    }
    // now we calculate the multiplication of enter numbers
    printf("multiplication of ");
    for(i=0;i<totalNumber;i++){
    if(i==totalNumber-1){
        printf("%d=",s[i]);
    }
    else
    {
        printf("%d,",s[i]);
    }
    }
    int result1;
    result1=1; 
    for(i=0;i<totalNumber;i++){
    result1=result1*s[i];}

    printf("%d",result1);
     
// now we calculate the addition of enter number 
    printf("\naddition of");
    for(i=0;i<totalNumber;i++){
        if(i==totalNumber-1){
            printf("%d=",s[i]);

        }
        else
        {
                  printf("%d,",s[i]);
       }
    } 
        int result2;
        result2=0;
        for(i=0;i<totalNumber;i++){
            result2=result2+s[i];
        }
        
        printf("%d",result2);
    
    
     return 0;
}  




