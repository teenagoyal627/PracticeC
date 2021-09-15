#include<stdio.h>
// to calculate the speed of car
int main()
{
    float time,distance ,speed  ;
    int unit;
    printf("Please enter the distance and time in km/h\n   ");
    printf("enter the unit in which you take time and distance  in \n 1.km/h \n 2.m/sec \n " );
    scanf("%d",&unit);
    // printf("enter time traveled by car  ");
    // scanf("%f",&time);
    // printf("\n enter distance traveled by car   ");
    // scanf("%f",&distance);
    switch ( unit){
        case 1:    
        printf("enter time taken by car in hr  ");
        scanf("%f",&time);
        printf("\n enter distance traveled by car in km  ");
        scanf("%f",&distance);
     
        speed=distance/time;
        printf("the speed is %f km/h ",speed); 
        break;
        case 2:
         printf("enter time taken by car in sec  ");
        scanf("%f",&time);
        printf("\n enter distance traveled by car in m  ");
        scanf("%f",&distance);
     
        speed=distance/time;
       
        printf("the speed is %f m/sec ",speed);
        default:printf("please enter the right unit of speed");
    }
    
    return 0;
    
    }

    