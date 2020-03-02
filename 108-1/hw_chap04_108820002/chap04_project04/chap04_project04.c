/*****************************************************************/
/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟 (put your name here)                              */
/* ID: 108820002 (your student ID here)                          */
/* Date: 2019.09.30 (put program development started date here   */
/* Purpose: chap04-04                     */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number between 0 and 32767 : ");
    scanf("%d",&n);     //input
    printf("In octal, your number is : %05o\n",n);      //output

    return 0;
}