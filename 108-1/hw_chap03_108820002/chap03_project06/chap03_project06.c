/*****************************************************************/
/* Class: Computer Programming, Fall 2019                        */
/* Author: ³¯¨Î§u (put your name here)                              */
/* ID: 108820002 (your student ID here)                          */
/* Date: 2019.09.09 (put program development started date here   */
/* Purpose: 3-6                     */
/* Change History: log the change history of the program         */
/*****************************************************************/

#include<stdio.h>
int main(){
    int num1,denom1,num2,denom2,result_num,result_demon;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);       //input
    printf("The sum is %d/%d",num1*denom2+num2*denom2,denom1*denom2);       //output
}
