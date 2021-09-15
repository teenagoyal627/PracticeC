#include<stdio.h>
// to calculate the speed of car
int main()
{
    float time,distance ,speed ;
    printf("enter time traveled by car  ");
    scanf("%f",&time);
    printf("\n enter distance traveled by car   ");
    scanf("%f",&distance);
    speed=distance/time;
    printf("The speed of car is %f   ",speed);
    return 0;
    }