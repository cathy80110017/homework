/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: xxx (put your name here)                              */
/* ID: 108820xxx (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 3-1                    */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    int year,month,day;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);   //¿é¤J
    printf("You entered the date: %d%02d%02d",year,month,day);   //¿é¥X

    return 0;
}
