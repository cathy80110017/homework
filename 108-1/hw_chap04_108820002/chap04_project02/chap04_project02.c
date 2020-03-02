/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: 陳佳吟 (put your name here)                              */
/* ID: 108820002 (your student ID here)                          */
/* Date: 2019.09.30 (put program development started date here   */
/* Purpose: chap04-02                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int n;
    printf("Enter a three-digit number : ");
    scanf("%d",&n);     //input

    printf("The reversal is : %d%d%d\n",n%10,(n/10)%10,((n/10)/10)%10);     //output
    return 0;
}