/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: xxx (put your name here)                              */
/* ID: 108820xxx (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 2-5                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int x=0;
    printf("Enter the value: ");
    scanf("%d",&x);         //input
    x=3*(pow(x,5))+2*(pow(x,4))-5*(pow(x,3))-pow(x,2)+7*x-6; //calculate
    printf("Result: %d\n",x);   //output
}
