/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟                                                 */
/* ID: 108820002                                                 */
/* Date: 2019.12.30                                              */
/* Purpose: chap16.05                                            */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<string.h>

#define Hours_per_half_day 12
#define Minutes_per_hour 60
#define Minutes_per_half_day 12*60

#define Size ((int)(sizeof(flights) / sizeof(flights[0])))

struct flight{
    int dparture, arrival;  //打錯字就算啦～
};

void put_time(int time){
    int hour = time / Minutes_per_hour;

    if (hour == 0){
        hour = Hours_per_half_day;
    }else if (hour > Hours_per_half_day){
        hour -= Hours_per_half_day;
    }
    printf("%d:%.2d ", hour, time % Minutes_per_hour);
    
    if (time < Minutes_per_half_day){
        printf("a.m.");
    }else{
        printf("p.m.");
    }
}

int main(void){

    struct flight flights[] = {
        {480, 616}, {583, 712}, {679, 811}, {767, 900},
        {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};
    
    int hours, minutes, time, closest;

    printf("Enter a 24-hours time: ");
    scanf("%d:%d", &hours, &minutes);   //input
    time = hours * Minutes_per_hour + minutes;

    if (time <= flights[0].dparture){
        closest = 0;
    }else if(time > flights[Size - 1].dparture){
        closest = Size - 1;
    }else{
        closest = 0;
        while (time > flights[closest + 1].dparture){
            closest++;
        }
        if ((flights[closest + 1].dparture - time) < (time - flights[closest].dparture)){
            closest++;
        }
    }
    
    printf("Closest departure time is");    //output
    put_time(flights[closest].dparture);
    printf(" ,arriving at ");
    put_time(flights[closest].arrival);
    printf("\n");

    return 0;
}