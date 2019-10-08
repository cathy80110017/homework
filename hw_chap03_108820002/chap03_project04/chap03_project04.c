/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: ³¯¨Î§u (put your name here)                              */
/* ID: 108820002 (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 3-4                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int head,middle,last;
    printf("Enter phone number[(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&head,&middle,&last);        //input
    printf("You entered %d.%d.%d",head,middle,last);        //output
    return 0;
}
