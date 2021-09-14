 
 #include<stdio.h>
int main()
{
    printf("to calculate the area of triangle\n ");
    float base,height;
    printf("enter base of triangle   "  );
    scanf("%f",&base);
    if(base<=0){
        printf("enter valid base value ");
    return 0;
    }
    printf("enter height of triangle\n   ");
    scanf("%f",&height);
   if (height<=0){
        printf("enter valid height value ");
        return 0;
    } 
    float result;
    result=0.5*base*height;
    printf("%f",result);
    return 0;
}