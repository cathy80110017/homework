/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: xxx (put your name here)                              */
/* ID: 108820xxx (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: description of program function                      */
/* Change History: log the change history of the program         */
/*****************************************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a two-digit number : ");
    scanf("%d",&n);     //input

    printf("The reversal is : %d%d\n",n%10,n/10);       //output
    return 0;
}
